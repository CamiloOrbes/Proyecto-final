#ifndef NUMJUGS_H
#define NUMJUGS_H

#include <QDialog>

namespace Ui {
class NumJugs;
}

class NumJugs : public QDialog
{
    Q_OBJECT

public:
    explicit NumJugs(QWidget *parent = 0);
    ~NumJugs();

    int getX() const;
    void setX(int value);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::NumJugs *ui;
    int x;
};

#endif // NUMJUGS_H
