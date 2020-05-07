#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QApplication>
#include <QPoint>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMainWindow>
#include <QMouseEvent>
#include <QPainter>
#include <QToolButton>
#include <QStyle>
#include <QWidget>
#include <QIcon>
#include <QMovie>
#include <QMessageBox>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QLineEdit>
#include <QFont>
#include <QPalette>
#include <QDebug>
#include <QFileDialog>
#include <QFile>
#include <QObject>
#include <QString>
#include <QStringList>
#include <QVariant>
#include <QTableView>
#include <QJsonArray>
#include <QJsonDocument>
#include <QAxObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <vector>
#include <QCheckBox>
#include <QGridLayout>
#include <QGroupBox>
#include <objbase.h>
typedef unsigned int UINT;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;

protected:
    void mousePressEvent(QMouseEvent *event);            //鼠标按下事件
    void mouseReleaseEvent(QMouseEvent *event);          //鼠标释放事件
    void mouseMoveEvent(QMouseEvent *event);             //鼠标移动事件
signals:
public slots:
    void ShowData();
    void UploadData();
    void SaveData();
    void OpenData();
    void Click_checkBox_1();
    void Click_checkBox_2();
    void Click_checkBox_3();
    void Click_checkBox_4();
private:
    QAxObject *excel;
    QAxObject *workbooks;
    QAxObject *workbook;
    QAxObject *worksheets;
    QAxObject *worksheet;
    QPushButton *QuitBtn;
    QPushButton *Save;
    QPushButton *Open;
    QPushButton *Upload;
    QPushButton *Info;
    bool m_bPressed;
    QLabel *Bottom;
    QLabel *Back;
    QLabel *Logo;
    QLabel *Dec;
    QLabel *Title;
    QLabel *Infotxt;
    QLabel *Infowindow;
    QPoint m_point;
    QToolButton *minButton;
    QToolButton *closeButton;
    QToolButton *maxButto;
    QTableWidget  *tw;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    int Opt[5]={0,0,0,0,0};
};

#endif // MAINWINDOW_H

