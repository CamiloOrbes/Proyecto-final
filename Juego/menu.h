#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QMessageBox>
#include "dialogo.h"
#include "avatar.h"
#include "instrucciones.h"

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();
    int getUsuario();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();



private:
    Ui::Menu *ui;
    Dialogo *login;
    Instrucciones *ins;
    Avatar *deportista;
    int usuario=0;
};

#endif // MENU_H
