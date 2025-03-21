#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QDebug>
#include <QPushButton>
#include <QGroupBox>
#include <QMediaPlayer>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
