#include "dialogo.h"
#include "ui_dialogo.h"
#include <QString>
#include <QDialog>
#include <QMessageBox>



Dialogo::Dialogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogo)
{
    ui->setupUi(this);
}

Dialogo::~Dialogo()
{
    delete ui;
}

void Dialogo::on_pushButton_clicked()
{
  Restriccion preguntas;//creo un objeto de la clase dialogo, aparece inicio de sesion
  preguntas.setModal(true);//solamenta la ventana principal controla el dialogo
  preguntas.exec();//ejecuta el dialogo
  int i=0;
  for(i;i<2;i++){
  if (preguntas.getPermiso()==true){
        QMessageBox::information(this,"Inicio de Sesion","Inicio de sesion correcto");
        close();
        break;
 }
  else{
      QMessageBox::information(this,"Inicio de Sesion","Inicio de Sesion invalido, vuelva a intentarlo");
            preguntas.setModal(true);
            preguntas.exec();

  }
  if(i==3){
  QMessageBox::information(this,"Inicio de Sesion","Excedio el numero de intentos, hasta luego");
  close();
  QApplication::exit();
  }
  else close();


}}
QString Dialogo::getText(){

    text=ui->lineEdit->text();
    return text;
}
QString Dialogo::getContrasena(){
    contrasena=ui->lineEdit_2->text();
    return contrasena;
}


