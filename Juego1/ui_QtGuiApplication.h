/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION_H
#define UI_QTGUIAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplicationClass
{
public:
    QAction *actionExit;
    QAction *actionDisparar;
    QAction *actionReiniciar;
    QAction *actionIniciar_Sesion;
    QAction *actionguardar;
    QAction *actionGuardar_Partida;
    QAction *actionCargar_Partida;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuBalon;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplicationClass)
    {
        if (QtGuiApplicationClass->objectName().isEmpty())
            QtGuiApplicationClass->setObjectName(QStringLiteral("QtGuiApplicationClass"));
        QtGuiApplicationClass->resize(907, 651);
        QtGuiApplicationClass->setStyleSheet(QStringLiteral(""));
        actionExit = new QAction(QtGuiApplicationClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionDisparar = new QAction(QtGuiApplicationClass);
        actionDisparar->setObjectName(QStringLiteral("actionDisparar"));
        actionReiniciar = new QAction(QtGuiApplicationClass);
        actionReiniciar->setObjectName(QStringLiteral("actionReiniciar"));
        actionIniciar_Sesion = new QAction(QtGuiApplicationClass);
        actionIniciar_Sesion->setObjectName(QStringLiteral("actionIniciar_Sesion"));
        actionguardar = new QAction(QtGuiApplicationClass);
        actionguardar->setObjectName(QStringLiteral("actionguardar"));
        actionGuardar_Partida = new QAction(QtGuiApplicationClass);
        actionGuardar_Partida->setObjectName(QStringLiteral("actionGuardar_Partida"));
        actionCargar_Partida = new QAction(QtGuiApplicationClass);
        actionCargar_Partida->setObjectName(QStringLiteral("actionCargar_Partida"));
        centralWidget = new QWidget(QtGuiApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 900, 600));
        QtGuiApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplicationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 907, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuBalon = new QMenu(menuBar);
        menuBalon->setObjectName(QStringLiteral("menuBalon"));
        QtGuiApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplicationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplicationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplicationClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuBalon->menuAction());
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuFile->addAction(actionReiniciar);
        menuFile->addSeparator();
        menuFile->addAction(actionGuardar_Partida);
        menuFile->addSeparator();
        menuFile->addAction(actionCargar_Partida);
        menuBalon->addAction(actionDisparar);

        retranslateUi(QtGuiApplicationClass);

        QMetaObject::connectSlotsByName(QtGuiApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplicationClass)
    {
        QtGuiApplicationClass->setWindowTitle(QApplication::translate("QtGuiApplicationClass", "QtGuiApplication", Q_NULLPTR));
        actionExit->setText(QApplication::translate("QtGuiApplicationClass", "Menu Principal", Q_NULLPTR));
        actionDisparar->setText(QApplication::translate("QtGuiApplicationClass", "Disparar", Q_NULLPTR));
        actionReiniciar->setText(QApplication::translate("QtGuiApplicationClass", "Reiniciar", Q_NULLPTR));
        actionIniciar_Sesion->setText(QApplication::translate("QtGuiApplicationClass", "Iniciar Sesion", Q_NULLPTR));
        actionguardar->setText(QApplication::translate("QtGuiApplicationClass", "guardar", Q_NULLPTR));
        actionGuardar_Partida->setText(QApplication::translate("QtGuiApplicationClass", "Guardar Partida", Q_NULLPTR));
        actionCargar_Partida->setText(QApplication::translate("QtGuiApplicationClass", "Cargar Partida", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("QtGuiApplicationClass", "File", Q_NULLPTR));
        menuBalon->setTitle(QApplication::translate("QtGuiApplicationClass", "Balon", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplicationClass: public Ui_QtGuiApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION_H
