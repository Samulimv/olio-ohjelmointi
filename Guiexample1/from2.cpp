#include "from2.h"
#include "ui_from2.h"

From2::From2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::From2)
{
    ui->setupUi(this);
}

From2::~From2()
{
    qDebug()<<"Form2 Thottu ";
    delete ui;
}

void From2::setFname(QString fn)
{
    qDebug()<<"Fname asetettu ";
    qDebug()<<"Fname= "+fn;
    ui->labelFname->setText(fn);


}

void From2::setLname(QString ln)
{
    ui->labelLname->setText(ln);
}
