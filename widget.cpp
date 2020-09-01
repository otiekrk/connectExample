#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *grid = new QGridLayout(this);
    btn_btn = new QPushButton(this);
    connect(btn_btn,&QPushButton::clicked,this,[this]{
       QMessageBox::information(this,"Tekst",QString("Tekst w guziku to:\n%1").arg(btn_btn->text()));
    });
    grid->addWidget(btn_btn,0,0);

    le_le  = new QLineEdit(this);
    connect(le_le,&QLineEdit::textChanged,this,[this]{
        btn_btn->setText(le_le->text());
        setWindowTitle(le_le->text());
    });
    grid->addWidget(le_le,1,0);

    setLayout(grid);
}

Widget::~Widget()
{
}

