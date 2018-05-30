#include "numjugs.h"
#include "ui_numjugs.h"

NumJugs::NumJugs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumJugs)
{
    ui->setupUi(this);
}

NumJugs::~NumJugs()
{
    delete ui;
}

int NumJugs::getX() const
{
    return x;
}

void NumJugs::setX(int value)
{
    x = value;
}

void NumJugs::on_buttonBox_accepted()
{
    setX(1);
}

void NumJugs::on_buttonBox_rejected()
{
    setX(2);
}
