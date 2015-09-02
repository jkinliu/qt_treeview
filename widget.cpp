#include "widget.h"
#include "ui_widget.h"
#include "mymodel.h"
#include "treemodel.h"
#include "delegate.h"
#include <QFile>
#include <QDirModel>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    mymodel* mm = new mymodel();
    ui->treeView->setModel(mm);
    SpinBoxDelegate* sd = new SpinBoxDelegate();
    ui->treeView->setItemDelegate(sd);
    /*
    QFile file(":/Resources/default.txt");
    file.open(QIODevice::ReadOnly);
    TreeModel* model = new TreeModel(file.readAll());
    file.close();
    ui->treeView->setModel(model);
    */
}

Widget::~Widget()
{
    delete ui;
}
