#include "mainwindow.h"
#include "loginwindow.h"
#include <QApplication>
#include <data.h>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    extern QString public_key;

    LoginWindow login;
    if (login.exec() == QDialog::Accepted)//调用login.exec()，阻塞主控制流，直到完成返回，继续执行主控制流
    {
        w.show();
        return a.exec();
    }
    else return 0;

}
