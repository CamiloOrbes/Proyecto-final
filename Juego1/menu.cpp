#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    scene1= new QGraphicsScene(this);
    /*ui->

    scene1->setBackgroundBrush(QBrush(QImage(":/images/caratua.png")));
    ui->graphicsView.setScene(scene1);
*/
}

Menu::~Menu()
{
    delete ui;
}

int Menu::getUsuario()
{
 return usuario;
}
void Menu::on_pushButton_clicked()
{
    Dialogo login;//creo un objeto de la clase dialogo, aparece inicio de sesion
    login.setModal(true);//solamenta la ventana principal controla el dialogo
    login.exec();//ejecuta el dialogo
    if(login.getText()=="juan"){
        if (login.getContrasena()=="12345"){
        deportista=new Avatar(0,20,"juan.png",200,200);//crea un objeto de la clase avatar
        usuario=1;

        }}
    else if(login.getText()=="alberto"){
        if(login.getContrasena()=="56789"){
        deportista=new Avatar(5,20,"alberto.png",200,200);
        usuario=2;}
    }
    close();
}

void Menu::on_pushButton_2_clicked()
{
    Instrucciones ins;
    ins.setModal(true);
    ins.exec();

}

void Menu::on_pushButton_3_clicked()
{
    close();
    QApplication::exit(0);
    exit(0);
}

void Menu::on_pushButton_4_clicked()
{

    close();
}


