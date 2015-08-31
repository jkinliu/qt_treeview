#include "widget.h"
#include "ui_widget.h"
#include "mymodel.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    mymodel mm;
    ui->treeView->setModel(&mm);
}

Widget::~Widget()
{
    delete ui;
}
