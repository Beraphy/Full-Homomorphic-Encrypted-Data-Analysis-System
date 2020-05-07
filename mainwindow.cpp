#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/back/image/logo.png"));
    this->setAttribute(Qt::WA_TranslucentBackground);//背景透明
    this->setWindowFlags( Qt::FramelessWindowHint ); // 去掉标题栏

    //背景
    Bottom = new QLabel(this);
    Bottom->setStyleSheet("border-image: url(:/back/image/background2.png);");
    Bottom->setFixedSize(1920, 1080);
    Bottom->move(0,0);
    Bottom->setScaledContents(true);
    Back = new QLabel(this);
    Back->setStyleSheet("border-image: url(:/back/image/background3.png);");
    Back->setFixedSize(300, 1080);
    Back->move(0,0);
    Back->setScaledContents(true);

    //最大化最小化关闭键
    QToolButton *minButton = new QToolButton(this);
    QToolButton *closeButton= new QToolButton(this);
    QToolButton *maxButton= new QToolButton(this);
    minButton->setIcon(QIcon(":/back/image/min.png"));
    closeButton->setIcon(QIcon(":/back/image/close.png"));
    maxButton->setIcon(QIcon(":/back/image/max.png"));
    minButton->setGeometry(1720,5,80,80);
    closeButton->setGeometry(1820,5,80,80);
    maxButton->setGeometry(1770,5,80,80);
    minButton->setIconSize(QSize(minButton->width(),minButton->height()));
    closeButton->setIconSize(QSize(closeButton->width(),closeButton->height()));
    maxButton->setIconSize(QSize(maxButton->width(),maxButton->height()));
    minButton->setStyleSheet("background-color:transparent;");
    closeButton->setStyleSheet("background-color:transparent;");
    maxButton->setStyleSheet("background-color:transparent;");
    maxButton->setToolTip("最大化");
    minButton->setToolTip("最小化");
    closeButton->setToolTip("关闭");
    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(minButton, SIGNAL(clicked()), this, SLOT(showMinimized()));
    connect(maxButton, SIGNAL(clicked()), this, SLOT(showMaximized()));

    //退出键
    QuitBtn = new QPushButton(this);
    QuitBtn->setStyleSheet("border-image: url(:/back/image/pic9.png);");
    QuitBtn->resize(191,81);
    QuitBtn->setFlat(true);
    QuitBtn->move(32,950);
    connect(QuitBtn,&QPushButton::clicked,this,&MainWindow::close);

    //菜单
    Open = new QPushButton(this);
    Open->setStyleSheet("border-image: url(:/back/image/open.png);");
    Open->resize(160,45);
    Open->setFlat(true);
    Open->move(42,400);
    Open->setToolTip("打开文件");
    connect(Open,SIGNAL(clicked()),this,SLOT(OpenData()));
    Save = new QPushButton(this);
    Save->setStyleSheet("border-image: url(:/back/image/save.png);");
    Save->resize(160,45);
    Save->setFlat(true);
    Save->move(42,500);
    Save->setToolTip("保存文件");
    connect(Save,SIGNAL(clicked()),this,SLOT(SaveData()));
    Upload = new QPushButton(this);
    Upload->setStyleSheet("border-image: url(:/back/image/update.png);");
    Upload->resize(160,45);
    Upload->setFlat(true);
    Upload->move(42,600);
    Upload->setToolTip("上传数据");
    connect(Upload,SIGNAL(clicked()),this,SLOT(UploadData()));
    Info = new QPushButton(this);
    Info->setStyleSheet("border-image: url(:/back/image/info.png);");
    Info->resize(160,45);
    Info->setFlat(true);
    Info->move(42,700);
    Info->setToolTip("显示用户登录信息");
    connect(Info,SIGNAL(clicked()),this,SLOT(ShowData()));

    //标题
    Title = new QLabel(this);
    Title->setStyleSheet("border-image: url(:/back/image/title.png);");
    Title->setFixedSize(200, 75);
    Title->move(20,20);
    Title->setScaledContents(true);

    //表格
    tw = new QTableWidget(this);  //创建空表格控件
    //tw=new QTableWidget(4,3,this);//创建4行3列表格控件
    tw->move(280,80);
    tw->resize(1100,970);
    tw->setRowCount(30);//设置行数
    tw->setColumnCount(10);//设置列数

    //登录信息
    Infowindow = new QLabel(this);
    Infowindow->setStyleSheet("border-image: url(:/back/image/infotxt.png);");
    Infowindow->setFixedSize(500, 400);
    Infowindow->move(1400,680);
    Infowindow->setScaledContents(true);
    Infotxt = new QLabel(this);
    QFont labelFont("黑体", 15 ,QFont::Bold);//
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::white);
    Infotxt->setPalette(pa); //设置颜色
    Infotxt->setFont(labelFont); //设置字体
    Infotxt->setFixedSize(400,300);
    Infotxt->move(1470,730);

    //右侧图
    Dec = new QLabel(this);
    Dec->setStyleSheet("border-image: url(:/back/image/dec.png);");
    Dec->setFixedSize(480, 320);
    Dec->move(1400,80);
    Dec->setScaledContents(true);

    //操作可选框
    QFont CheckBoxFont("黑体", 15);//***************************此处四个QcheckBox中更改操作名称
    checkBox_1 = new QCheckBox("平均值",this);
    checkBox_2 = new QCheckBox("方差",this);
    checkBox_3 = new QCheckBox("不确定度",this);
    checkBox_4 = new QCheckBox("线性回归",this);
    checkBox_1 ->setFont(CheckBoxFont);
    checkBox_2 ->setFont(CheckBoxFont);
    checkBox_3 ->setFont(CheckBoxFont);
    checkBox_4 ->setFont(CheckBoxFont);
    checkBox_1 ->move(1450,400);
    checkBox_2 ->move(1450,470);
    checkBox_3 ->move(1450,540);
    checkBox_4 ->move(1450,610);
    checkBox_1 ->setFixedSize(160, 45);
    checkBox_2 ->setFixedSize(160, 45);
    checkBox_3 ->setFixedSize(160, 45);
    checkBox_4 ->setFixedSize(160, 45);
    connect(checkBox_1, SIGNAL(clicked()), this, SLOT(Click_checkBox_1()));
    connect(checkBox_2, SIGNAL(clicked()), this, SLOT(Click_checkBox_2()));
    connect(checkBox_3, SIGNAL(clicked()), this, SLOT(Click_checkBox_3()));
    connect(checkBox_4, SIGNAL(clicked()), this, SLOT(Click_checkBox_4()));
}

// 鼠标相对于窗体的位置 event->globalPos() - this->pos()
void MainWindow::mousePressEvent(QMouseEvent *event){
    if (event->button() == Qt::LeftButton) {
        m_bPressed = true;
        m_point = event->pos();
    }
}

// 若鼠标左键被按下，移动窗体位置
void MainWindow::mouseMoveEvent(QMouseEvent *event){
    if (m_bPressed)
        move(event->pos() - m_point + pos());
}

// 设置鼠标未被按下
void MainWindow::mouseReleaseEvent(QMouseEvent *event){
    Q_UNUSED(event);
    m_bPressed = false;
}

void MainWindow::ShowData(){
    extern QString public_key;
    extern QString private_key;
    extern QString ip_addr;
    extern QString port_n;
    Infotxt->setText( "Public Key   "+public_key+"\n\n"
                     +"Private Key  "+private_key+"\n\n"
                     +"IP           "+ip_addr+"\n\n"
                     +"Port         "+port_n+"\n\n"
                     +"欢迎使用全同态加密数据"+"\n"
                     +"处理系统 BY BITGroup" );
    //qDebug()<<"3 "<<public_key;
}

void MainWindow::UploadData(){
    //*******************************************//
    /*
    加密
    接收数据
    解密
    */
    //*******************************************//
    extern QString public_key;

    QFile file( "E:/1.json");//*********************************************此处是json保存位置
    if(!file.open(QIODevice::ReadWrite)) {qDebug() << "File open error";}
    else {qDebug() <<"File open!";}

    //计算表格行列
    int colcount;
    int rowcount;
    for (int i =0 ;; i++) {
        if(tw->item(i,0)==nullptr || tw->item(i,0)->text().isEmpty()) {
            rowcount = i;
            break;
        }
    }
    for (int j =0 ;; j++) {
        if(tw->item(0,j)==nullptr || tw->item(0,j)->text().isEmpty()) {
            colcount = j;
            break;
        }
    }
    QJsonObject jsonObject;
    QJsonArray versionArray;
    QString data;
    QTableWidgetItem *item = new QTableWidgetItem;
    for(int i=0;i<rowcount;i++){
        for (int j=0;j<colcount;j++){
            if(tw->item(i,j)!=nullptr || !tw->item(i,j)->text().isEmpty()){
                item = tw->item(i,j);
                data = item->text();
                versionArray.append(data.toDouble());
            }
        }
    }
    jsonObject.insert("Key", public_key);
    jsonObject.insert("Table", versionArray);
    for (int i=0;i<5;i++) {
        if (Opt[i]>0)jsonObject.insert("Opt", Opt[i]);
    }
    //使用QJsonDocument设置该json对象
    QJsonDocument jsonDoc;
    jsonDoc.setObject(jsonObject);
    //将json以文本形式写入文件并关闭文件。
    file.write(jsonDoc.toJson());
    file.close();
    QApplication::setQuitOnLastWindowClosed(false);
    QMessageBox::information(this,tr("提示"),tr("上传成功!"));
    qDebug() << "Write to file";
    return ;
}

void MainWindow::SaveData(){
    QString fileName = QFileDialog::getSaveFileName(this,tr("保存文件"),
                                                         tr("/root/Projects/product/bin/config/未命名.xls"),
                                                         tr("file(*.xls *xlsx)"));
    if(!fileName.isEmpty()){
        QAxObject *excel = new QAxObject(this);
        excel->setControl("Excel.Application");
        excel->setProperty("Visible", false);
        excel->setProperty("DisplayAlerts", false);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示
        workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
        workbooks->dynamicCall("Add");//新建一个工作簿
        workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
        worksheets = workbook->querySubObject("Sheets");
        worksheet  = worksheets->querySubObject("Item(int)", 1);
        int colcount=tw->columnCount();
        int rowcount=tw->rowCount();

        for(int i=0;i<rowcount;i++){
            for (int j=0;j<colcount;j++){
                 worksheet->querySubObject("Cells(int,int)", i+1, j+1)->dynamicCall("SetValue(const QString&)", tw->item(i,j)?tw->item(i,j)->text():"");
             }
        }

        workbook->dynamicCall("SaveAs(const QString&)",QDir::toNativeSeparators(fileName));//保存至fileName
        workbook->dynamicCall("Close()");//关闭工作簿
        excel->dynamicCall("Quit()");//关闭excel
        delete excel;
        excel=NULL;

        QApplication::setQuitOnLastWindowClosed(false);
        QMessageBox::information(this,tr("提示"),tr("导出成功!"));
    }
    else{
        QApplication::setQuitOnLastWindowClosed(false);
        QMessageBox::warning(this,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void MainWindow::OpenData(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("打开文件"),
                                                          tr("/root/Projects/product/bin/config"),
                                                          tr("file(*.xls *xlsx)"));
    if(!fileName.isEmpty()){
        QAxObject *excel = new QAxObject(this);
        excel->setControl("Excel.Application");
        workbooks = excel->querySubObject("WorkBooks");
        excel->setProperty("Visible", false);
        workbooks->dynamicCall("Open(const QString&)", fileName);
        workbook = excel->querySubObject("ActiveWorkBook");
        worksheets = workbook->querySubObject("Sheets");
        worksheet  = worksheets->querySubObject("Item(int)", 1);
        QVariant var;
        QAxObject*usedRange = worksheet->querySubObject("UsedRange");
        QAxObject*rows = usedRange->querySubObject("Rows");
        QAxObject*cols = usedRange->querySubObject("Columns");
        int intCols = cols->property("Count").toInt();
        int intRows = rows->property("Count").toInt();
        var = usedRange->dynamicCall("Value");
        QVariantList varRows = var.toList();
        QVariantList rowData;
        for(int i = 0; i<intRows; i++) {
            for (int j = 0;j<intCols;j++) {
                rowData = varRows[i].toList();
                QString data = rowData[j].toString();
                QTableWidgetItem *pItem = new QTableWidgetItem();
                pItem->setText(data);
                tw->setItem(i,j,pItem);
            }
        }
        QApplication::setQuitOnLastWindowClosed(false);
        QMessageBox::information(0,tr("提示"),tr("导入成功!"));
        qDebug()<<"导入成功";
        workbook->dynamicCall("Close()");
        return;
    }
    else{
        QApplication::setQuitOnLastWindowClosed(false);
        QMessageBox::warning(this,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void MainWindow::Click_checkBox_1(){
    if(checkBox_1->isChecked()){
        for (int i=0;i<5;i++) {Opt[i]=0;}
        Opt[0] = 1;
        checkBox_2->setChecked(false);
        checkBox_2->setAutoExclusive(false);
        checkBox_3->setChecked(false);
        checkBox_3->setAutoExclusive(false);
        checkBox_4->setChecked(false);
        checkBox_4->setAutoExclusive(false);
    }
}
void MainWindow::Click_checkBox_2(){
    if(checkBox_2->isChecked()){
        for (int i=0;i<5;i++) {Opt[i]=0;}
        Opt[1] = 2;
        checkBox_1->setChecked(false);
        checkBox_1->setAutoExclusive(false);
        checkBox_3->setChecked(false);
        checkBox_3->setAutoExclusive(false);
        checkBox_4->setChecked(false);
        checkBox_4->setAutoExclusive(false);
    }
}
void MainWindow::Click_checkBox_3(){
    if(checkBox_3->isChecked()){
        for (int i=0;i<5;i++) {Opt[i]=0;}
        Opt[2] = 3;
        checkBox_1->setChecked(false);
        checkBox_1->setAutoExclusive(false);
        checkBox_2->setChecked(false);
        checkBox_2->setAutoExclusive(false);
        checkBox_4->setChecked(false);
        checkBox_4->setAutoExclusive(false);
    }
}
void MainWindow::Click_checkBox_4(){
    if(checkBox_4->isChecked()){
        for (int i=0;i<5;i++) {Opt[i]=0;}
        Opt[3] = 4;
        checkBox_1->setChecked(false);
        checkBox_1->setAutoExclusive(false);
        checkBox_2->setChecked(false);
        checkBox_2->setAutoExclusive(false);
        checkBox_3->setChecked(false);
        checkBox_3->setAutoExclusive(false);
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}

