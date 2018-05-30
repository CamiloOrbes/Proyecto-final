#ifndef DIALOGO_H
#define DIALOGO_H
#include <QDialog>
#include "restriccion.h"

namespace Ui {
class Dialogo;
}

class Dialogo : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogo(QWidget *parent = 0);
    ~Dialogo();
    QString getText();
    QString getContrasena();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialogo *ui;
    QString text;
    QString contrasena;
    Restriccion *preguntas;

};

#endif // DIALOGO_H

