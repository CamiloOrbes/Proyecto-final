/********************************************************************************
** Form generated from reading UI file 'instrucciones.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCCIONES_H
#define UI_INSTRUCCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Instrucciones
{
public:
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *Instrucciones)
    {
        if (Instrucciones->objectName().isEmpty())
            Instrucciones->setObjectName(QStringLiteral("Instrucciones"));
        Instrucciones->resize(597, 400);
        Instrucciones->setStyleSheet(QStringLiteral("Background-image:url(:/images/pizarron.jpg)"));
        label = new QLabel(Instrucciones);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 511, 70));
        label->setStyleSheet(QStringLiteral("background-image:url(:/images/instrucciones3.png)"));
        textEdit = new QTextEdit(Instrucciones);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 120, 431, 231));
        textEdit->setStyleSheet(QStringLiteral("Background:rgb(2, 117, 54)"));

        retranslateUi(Instrucciones);

        QMetaObject::connectSlotsByName(Instrucciones);
    } // setupUi

    void retranslateUi(QDialog *Instrucciones)
    {
        Instrucciones->setWindowTitle(QApplication::translate("Instrucciones", "Dialog", Q_NULLPTR));
        label->setText(QString());
        textEdit->setHtml(QApplication::translate("Instrucciones", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#ffffff;\">Se tiene un ca\303\261\303\263n que dispara pelotas de colores su objetivo es disparar dependiendo del color del cuadrado, tienes disparos limitados para poder lograr este objetivo. \302\241OJO NO LOS PIERDAS! </span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#ffffff;\">El color de la pelota es posible cambiarlo mediante las teclas: 1 y 2. </span"
                        "></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#ffffff;\">La direcci\303\263n y la velocidad la ajustas mediante el movimiento del cursor. </span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#ffffff;\">\302\241A JUGAR! </span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Instrucciones: public Ui_Instrucciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCCIONES_H
