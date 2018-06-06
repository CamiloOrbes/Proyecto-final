#ifndef RESTRICCION_H
#define RESTRICCION_H

#include <QDialog>

namespace Ui {
class Restriccion;
}

class Restriccion : public QDialog
{
    Q_OBJECT

public:
    explicit Restriccion(QWidget *parent = 0);
    ~Restriccion();
    bool getPermiso();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Restriccion *ui;
    bool permiso;
};

#endif // RESTRICCION_H
