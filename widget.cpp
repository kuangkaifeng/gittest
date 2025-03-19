#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,&QPushButton::clicked,this,&Widget::on_pushButton_5_clicked,Qt::DirectConnection);
#if QT_BYTE_ORDER==Q_LITTLE_ENDIAN
    qDebug()<<"小段字节序:";
#else
    qDebug()<<"大段字节序:";
#endif
    QStringList strlist;
    strlist<<"n"<<"i"<<"h"<<"a"<<"0";
    int i=10;
    foreach(const QString &codeName,strlist)
    {
        qFatal("text:",i);
    }


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_5_clicked()
{
    QObjectList objlist=ui->groupBox->children();
    for(QObject *obj:objlist)
    {
        QPushButton *btn=qobject_cast<QPushButton*>(obj);
        if(btn)
        {
            obj->setProperty("required",true);
            qDebug() << "Button:" << btn->text() << "required:" << obj->property("required").toBool();
        }
    }
    // 设置样式表，将所有 required='true' 的控件背景颜色设置为红色
    this->setStyleSheet("*[required='true'] { background-color: red; }");
//    this->update();
}
