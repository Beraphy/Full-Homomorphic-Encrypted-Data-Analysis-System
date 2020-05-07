#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/back/image/logo.png"));
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    PublicKey = new QLineEdit(this);
    PublicKey->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px");
    PublicKey->setFont(QFont("黑体" , 12 ));
    PublicKey->move(670,200);
    PublicKey->setPlaceholderText("请输入公钥");

    PrivateKey = new QLineEdit(this);
    PrivateKey->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px");
    PrivateKey->setFont(QFont("黑体" , 12 ));
    PrivateKey->move(670,270);
    PrivateKey->setPlaceholderText("请输入私钥");

    IP = new QLineEdit(this);
    IP->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px");
    IP->setFont(QFont("黑体" , 12 ));
    IP->move(670,340);
    IP->setPlaceholderText("请输入IP地址");

    Port = new QLineEdit(this);
    Port->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px");
    Port->setFont(QFont("黑体" , 12 ));
    Port->move(670,410);
    Port->setPlaceholderText("请输入端口号");

    QIcon icon;
    icon.addFile("./image/login.png");
    loginBtn = new QPushButton(this);
    loginBtn->setIcon(icon);
    loginBtn->setFlat(true);
    loginBtn->setIconSize(QSize(250,50));
    loginBtn->move(615,485);
    connect(loginBtn,&QPushButton::clicked,this,&LoginWindow::login);

    QShortcut *key=new QShortcut(QKeySequence(Qt::Key_Return),this);//创建一个快捷键"Key_Return"键
    connect(key,SIGNAL(activated()),this,SLOT(login()));//连接到指定槽函数

}
void LoginWindow::login()
{
    //获得userNameLEd输入框的文本：userNameLEd->text()；
    //trimmed()去掉前后空格
    //tr()函数，防止设置中文时乱码

    if(1/*PublicKey->text().trimmed() == tr("1") && PrivateKey->text() == tr("1")*/)
    {
        extern QString public_key;
        extern QString private_key;
        extern QString ip_addr;
        extern QString port_n;
        public_key = PublicKey->text();
        private_key = PrivateKey->text();
        ip_addr = IP->text();
        port_n = Port->text();
        accept();//关闭窗体，并设置返回值为Accepted
    }
    else
    {                              //标题              内容                OK按钮
        QMessageBox::warning(this, tr("警告！"),tr("公钥或私钥错误！"),QMessageBox::Yes);

        // 清空输入框内容
        PublicKey->clear();
        PrivateKey->clear();
        IP->clear();
        Port->clear();

        //光标定位
        PublicKey->setFocus();
    }

}


LoginWindow::~LoginWindow()
{
    delete ui;
}

