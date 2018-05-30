/********************************************************************************
** Form generated from reading UI file 'dialogo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGO_H
#define UI_DIALOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialogo
{
public:
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;

    void setupUi(QDialog *Dialogo)
    {
        if (Dialogo->objectName().isEmpty())
            Dialogo->setObjectName(QStringLiteral("Dialogo"));
        Dialogo->resize(600, 250);
        Dialogo->setStyleSheet(QStringLiteral("background-image: url(:/images/Iniciosesion.jpg)"));
        lineEdit = new QLineEdit(Dialogo);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 60, 331, 41));
        lineEdit->setStyleSheet(QStringLiteral("font: 14pt \"Algerian\";"));
        label_2 = new QLabel(Dialogo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 70, 91, 21));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 16pt \"Algerian\";"));
        pushButton = new QPushButton(Dialogo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 170, 331, 41));
        pushButton->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Algerian\";"));
        label_3 = new QLabel(Dialogo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 20, 281, 31));
        label_3->setStyleSheet(QLatin1String("font: 28pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(Dialogo);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 110, 331, 41));
        lineEdit_2->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(Dialogo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 120, 141, 21));
        label_4->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Algerian\";"));

        retranslateUi(Dialogo);

        QMetaObject::connectSlotsByName(Dialogo);
    } // setupUi

    void retranslateUi(QDialog *Dialogo)
    {
        Dialogo->setWindowTitle(QApplication::translate("Dialogo", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialogo", "Usuario:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialogo", "Login", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialogo", "Iniciar Sesi\303\263n:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialogo", "CONTRASE\303\221A:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialogo: public Ui_Dialogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGO_H
