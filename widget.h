#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QMessageBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QPushButton *btn_btn;
    QLineEdit *le_le;
};
#endif // WIDGET_H
