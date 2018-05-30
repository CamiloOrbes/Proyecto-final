/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(907, 593);
        Menu->setStyleSheet(QStringLiteral("background-image:url(:/images/Menu.jpg)"));
        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 300, 281, 71));
        pushButton->setStyleSheet(QLatin1String("font: 25pt \"Algerian\";\n"
"color: rgb(255, 255, 0);\n"
"background-image:url(:/images/Iniciosesion.jpg)"));
        pushButton_2 = new QPushButton(Menu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 420, 280, 70));
        pushButton_2->setStyleSheet(QLatin1String("font: 25pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(Menu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 420, 281, 71));
        pushButton_3->setToolTipDuration(-1);
        pushButton_3->setStyleSheet(QStringLiteral("background-image:url(:/images/Salir20.png)"));
        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 851, 151));
        label->setStyleSheet(QStringLiteral("background-image: url(:/images/colorworld.png)"));
        pushButton_4 = new QPushButton(Menu);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 300, 281, 71));
        pushButton_4->setStyleSheet(QLatin1String("font: 25pt \"Algerian\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/images/ball-pit.jpg)"));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Menu", "Iniciar Sesion", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Menu", "INSTRUCCIONES", Q_NULLPTR));
        pushButton_3->setText(QString());
        label->setText(QString());
        pushButton_4->setText(QApplication::translate("Menu", "Jugar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
