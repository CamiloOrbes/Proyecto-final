#include "restriccion.h"
#include "ui_restriccion.h"

Restriccion::Restriccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Restriccion)
{
    ui->setupUi(this);

}

Restriccion::~Restriccion()
{
    delete ui;
}

void Restriccion::on_pushButton_clicked()
{

    if(ui->radioButton->isChecked() && ui->radioButton_6->isChecked() && ui->radioButton_8->isChecked() && ui->radioButton_10->isChecked())//1,6,8,10
        permiso=true;
    else permiso=false;
    close();
}
bool Restriccion::getPermiso(){
    return permiso;
}
