#include "school.h"
#include "ui_school.h"
#include <QString>

School::School(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::School)
{
    ui->setupUi(this);
}

School::~School()
{
    delete ui;
}

void School::on_pushButton_2_clicked()
{
    exit(1);
}

void School::on_lineEdit_textEdited(const QString &arg1)
{
    user = arg1;

}


void School::on_lineEdit_2_textEdited(const QString &arg1)
{
    pass = arg1;

}

void School::on_pushButton_clicked()
{
// if nazem login
//    na1.show();
//    this->close();

// if moalem login
    Moalem1 *mo;
    mo = new Moalem1;
    mo->show();
    this->close();
}
