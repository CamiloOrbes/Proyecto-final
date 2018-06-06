#include <QDebug>
#include <QTextStream>
#include <QFile>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    QSerialPort serial;
    serial.setPortName("COM5"); //Poner el nombre del puerto, probablemente no sea COM3

    if(serial.open(QIODevice::ReadWrite)){
        //Ahora el puerto seria está abierto
        if(!serial.setBaudRate(QSerialPort::Baud9600)) //Configurar la tasa de baudios
            qDebug()<<serial.errorString();

        if(!serial.setDataBits(QSerialPort::Data8))
            qDebug()<<serial.errorString();

        if(!serial.setParity(QSerialPort::NoParity))
            qDebug()<<serial.errorString();

        if(!serial.setStopBits(QSerialPort::OneStop))
            qDebug()<<serial.errorString();

        if(!serial.setFlowControl(QSerialPort::NoFlowControl))
            qDebug()<<serial.errorString();

        //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        //Sincrona

        serial.waitForReadyRead(1000);
        serial.write("k\n");  //Enviar un caracter a Arduino para saber que debe iniciar la transmisión
        char message[1024];   //Número máximo de caracteres
        int l = 0;
        if(serial.waitForReadyRead(10000)){
            //Data was returned
            l = serial.readLine(message,100); //Leer toda la línea que envía arduino
            qDebug()<<"Response: "<<message;
        }else{
            //No data
            qDebug()<<"Time out";
        }
        float velocidad;

        velocidad = atof(&message[0]);
        cout<<velocidad<<"m/s"<<endl;
        if (velocidad!=0){
            cout<<"Funciono"<<endl;
        }

        serial.close();
    }else{
        qDebug()<<"Serial COM3 not opened. Error: "<<serial.errorString();
    }
    return 0;
}
/*float QtGuiApplication::Arduino()
{
    float velocidad,Vx,Vy;
    QSerialPort serial;
    serial.setPortName("COM5"); //Poner el nombre del puerto, probablemente no sea COM3

    if(serial.open(QIODevice::ReadWrite)){
        //Ahora el puerto seria está abierto
        if(!serial.setBaudRate(QSerialPort::Baud9600)) //Configurar la tasa de baudios
            qDebug()<<serial.errorString();

        if(!serial.setDataBits(QSerialPort::Data8))
            qDebug()<<serial.errorString();

        if(!serial.setParity(QSerialPort::NoParity))
            qDebug()<<serial.errorString();

        if(!serial.setStopBits(QSerialPort::OneStop))
            qDebug()<<serial.errorString();

        if(!serial.setFlowControl(QSerialPort::NoFlowControl))
            qDebug()<<serial.errorString();

        //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        //Sincrona

        serial.waitForReadyRead(1000);
        serial.write("k\n");  //Enviar un caracter a Arduino para saber que debe iniciar la transmisión
        char message[1024];   //Número máximo de caracteres
        int l = 0;
        if(serial.waitForReadyRead(10000)){
            //Data was returned
            l = serial.readLine(message,100); //Leer toda la línea que envía arduino
            qDebug()<<"Response: "<<message;
        }else{
            //No data
            qDebug()<<"Time out";
        }


        velocidad = atof(&message[0]);
        cout<<velocidad<<"m/s"<<endl;
        if (velocidad!=0){
            cout<<"Funciono"<<endl;
        }

        serial.close();
    }else{
        qDebug()<<"Serial COM5 not opened. Error: "<<serial.errorString();
    }

    return velocidad;

}
void QtGuiApplication::mousePressEvent(QMouseEvent * ev)
{
    //creacion de cada pelota.
    float Vloci,VX,VY;
    Vloci =Arduino();
    float ang = atan2(600-ev->y(),ev->x());
    VX = Vloci*cos(ang);
    VY = Vloci*sin(ang);

    if(!(tiros==0)){
    bars.push_back(new BolasGraf(VX,VY,colorset));
    scene->addItem(bars.back());
    bars.back()->setPos(0,600);
    if (tiros == 0) { return; }
    disparo = QDateTime::currentDateTime();
    tiros--;
    timer->start(18);
    }
}
*/
