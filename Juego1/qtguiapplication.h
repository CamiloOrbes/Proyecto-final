#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication.h"
#include <QMainWindow>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QGraphicsScene>
#include <QPixmap>
#include <QImage>
#include <QGraphicsPixmapItem>
#include <QList>
#include <QTimer>
#include <qdatetime.h>
#include <QDebug>
#include <QBrush>
#include <QImage>
#include <QDialog>
#include <iostream>
#include<fstream>
#include<istream>
#include"QString"

#include <QTextStream>
#include <QFile>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <stdlib.h>

#include "menu.h"
#include "dialogo.h"
#include "apuntador.h"
#include "cuadrados.h"
#include "arbitros.h"
#include "canon.h"
#include "avatar.h"
#include "obstaculo.h"
#include "bolas.h"
#include "bolasgraf.h"
#include "numjugs.h"
#include "obsmovil.h"

using namespace std;

class QtGuiApplication : public QMainWindow //heredar
{
    Q_OBJECT

public:
    QtGuiApplication(QWidget *parent = Q_NULLPTR);
    float Arduino();
    int getNumJug() const;
    void setNumJug(int value);

private slots:
    void actualizar();
    //void on_actionDisparar_triggered();
	void on_actionExit_triggered();
	void on_actionReiniciar_triggered();
    void on_actionGuardar_Partida();
    void on_actionCargar_Partida();
    void rotar();
protected:
    void mousePressEvent(QMouseEvent * ev);

private:
	void cargarNivel();
    void keyPressEvent(QKeyEvent *event);

    Ui::QtGuiApplicationClass ui;
    Avatar *deportista;
    Avatar *deportista1;
    QDateTime disparo; //Guarda en disparo el momento justo en que se dispara una pelota
	QGraphicsScene *scene;
    NumJugs *nj;
    QGraphicsPixmapItem *item;//Item para mostrar en la escena con una imgen
    //QList internamente representa un array
    QList <Cuadrados*> Cuadros;//lista con objetos de la clase cudrados para añadir a la escena.
    QList <Obstaculo*> obs;//lista con objetos de la clase bloques para mostrarlos en escena
    QList <BolasGraf*> bars;   //lista con objetos de la clase bolasgraf con los cuerpos para mostrarlos.
    QList<QGraphicsItem*> flag;
    QTimer *timer, *timer1;              //timer para los intervalos de tiempo entre cada frame
    Menu *menuP;
    int usuario; //se crea para saber si el usuario es juan o alberto
    float ratio = 0;
	int nivel = 0;
	int vidas=3;
    Canon *canon;
    ObsMovil *obsmov;
    int colorset=1;
	bool perdio = false;
	int tiros;
	int enemigos;
    float dt;                   //intervalo de tiempo entre frames
	int h_limit;                //longitud en X del mundo
	int v_limit;                //longitud en Y del mundo
    void bordercollision(BolasGraf* b);   //metodo para las colisiones con los bordes del mundo
    string arch1;
    int getNivel();
    int numJug;


};
