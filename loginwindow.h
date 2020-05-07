#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QIcon>
#include <QMessageBox>
#include <QShortcut>
//#include <data.h>
QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private:
    Ui::LoginWindow *ui;
signals:
public slots:
    void login();
private:
    QPushButton *loginBtn;
    QShortcut *key;
    QLineEdit *PublicKey;
    QLineEdit *PrivateKey;
    QLineEdit *IP;
    QLineEdit *Port;
};

#endif // LOGINWINDOW_H
