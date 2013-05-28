#include "nazem2.h"
#include "ui_nazem2.h"
#include "nazem1.h"


Nazem2::Nazem2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nazem2)
{
    ui->setupUi(this);
}

Nazem2::~Nazem2()
{
    delete ui;
}

void Nazem2::on_pushButton_6_clicked()
{
    Nazem1 *na1;
    na1 = new Nazem1;
    na1->show();
    this->close();

}

void Nazem2::on_pushButton_clicked()
{
    ui->tableWidget->insertRow(1);
}

void Nazem2::on_pushButton_3_clicked()
{
    ui->tableWidget->removeRow(1);
}
