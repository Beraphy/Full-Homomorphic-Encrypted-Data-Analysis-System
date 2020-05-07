/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *pubkey;
    QLabel *prikey;
    QLabel *port;
    QLabel *ip;
    QPushButton *quit;
    QPushButton *login;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(1029, 638);
        label = new QLabel(LoginWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 1071, 611));
        label->setTabletTracking(false);
        label->setAcceptDrops(false);
        label->setAutoFillBackground(false);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(1);
        label->setPixmap(QPixmap(QString::fromUtf8(":/back/image/background.png")));
        label_3 = new QLabel(LoginWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-20, 50, 611, 491));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/back/image/pic1.png")));
        label_4 = new QLabel(LoginWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(500, 40, 481, 171));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/back/image/pic2.png")));
        pubkey = new QLabel(LoginWindow);
        pubkey->setObjectName(QString::fromUtf8("pubkey"));
        pubkey->setGeometry(QRect(610, 180, 61, 61));
        pubkey->setPixmap(QPixmap(QString::fromUtf8(":/back/image/pic3.png")));
        pubkey->setScaledContents(true);
        prikey = new QLabel(LoginWindow);
        prikey->setObjectName(QString::fromUtf8("prikey"));
        prikey->setGeometry(QRect(610, 260, 61, 51));
        prikey->setPixmap(QPixmap(QString::fromUtf8(":/back/image/pic4.png")));
        prikey->setScaledContents(true);
        port = new QLabel(LoginWindow);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(610, 400, 61, 51));
        port->setPixmap(QPixmap(QString::fromUtf8(":/back/image/pic5.png")));
        port->setScaledContents(true);
        ip = new QLabel(LoginWindow);
        ip->setObjectName(QString::fromUtf8("ip"));
        ip->setGeometry(QRect(600, 320, 81, 71));
        ip->setPixmap(QPixmap(QString::fromUtf8(":/back/image/pic7.png")));
        ip->setScaledContents(true);
        quit = new QPushButton(LoginWindow);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(50, 510, 81, 61));
        quit->setFocusPolicy(Qt::StrongFocus);
        quit->setAutoFillBackground(false);
        quit->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/back/image/pic6.png);"));
        quit->setIconSize(QSize(10, 10));
        quit->setCheckable(false);
        quit->setAutoRepeat(false);
        quit->setAutoExclusive(false);
        login = new QPushButton(LoginWindow);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(620, 480, 261, 61));
        login->setStyleSheet(QString::fromUtf8("border-image: url(:/back/image/login.png);"));

        retranslateUi(LoginWindow);
        QObject::connect(quit, SIGNAL(clicked()), LoginWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pubkey->setText(QString());
        prikey->setText(QString());
        port->setText(QString());
        ip->setText(QString());
        quit->setText(QString());
        login->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
