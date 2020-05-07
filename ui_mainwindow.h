/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *action_Average;
    QAction *actionVariance;
    QAction *actionUncertainty;
    QAction *actionSum;
    QAction *actionSort;
    QAction *actionOutput;
    QAction *actionSave_2;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1134);
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        QFont font;
        font.setFamily(QString::fromUtf8("BIZ UDPGothic"));
        actionFile->setFont(font);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        action_Average = new QAction(MainWindow);
        action_Average->setObjectName(QString::fromUtf8("action_Average"));
        actionVariance = new QAction(MainWindow);
        actionVariance->setObjectName(QString::fromUtf8("actionVariance"));
        actionUncertainty = new QAction(MainWindow);
        actionUncertainty->setObjectName(QString::fromUtf8("actionUncertainty"));
        actionSum = new QAction(MainWindow);
        actionSum->setObjectName(QString::fromUtf8("actionSum"));
        actionSort = new QAction(MainWindow);
        actionSort->setObjectName(QString::fromUtf8("actionSort"));
        actionOutput = new QAction(MainWindow);
        actionOutput->setObjectName(QString::fromUtf8("actionOutput"));
        actionSave_2 = new QAction(MainWindow);
        actionSave_2->setObjectName(QString::fromUtf8("actionSave_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionFile->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        action_Average->setText(QCoreApplication::translate("MainWindow", "Average", nullptr));
        actionVariance->setText(QCoreApplication::translate("MainWindow", "Variance", nullptr));
        actionUncertainty->setText(QCoreApplication::translate("MainWindow", "Uncertainty", nullptr));
        actionSum->setText(QCoreApplication::translate("MainWindow", "Sum", nullptr));
        actionSort->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        actionOutput->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        actionSave_2->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
