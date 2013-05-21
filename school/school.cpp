#include "school.h"
#include "ui_school.h"
//#include<QtSql/QSqlDatabase>
#include<QtSql>
#include<QDebug>
School::School(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::School)
{
    ui->setupUi(this);
    this->configureDataBase();
    this->configureTables();
}
//Function for make connections for DataBases
void School::configureDataBase()
{

     school_.setHostName("localhost");
     school_.setDatabaseName("school_db");
     school_.setUserName("user");
     school_.setPassword("password");
     bool t=school_.open();
}

//Function for Configuring Tables
void School::configureTables()
{
    q_School_=new QSqlQuery(school_);

    //create tables:
    q_School_->exec("CREATE TABLE login_table(user varchar(100),password varchar(100),ID int)");
    q_School_->exec("CREATE TABLE student_table(first_Name varchar(100),last_Name varchar(100),math_Grade int,physics_Grade int,chemistry_Grade int,geometry_Grade int,regularity_Grade int,ID int,class_ID int)");
    q_School_->exec("CREATE TABLE teacher_table(first_Name varchar(100),last_Name varchar(100),ID int,class_ID int)");
    q_School_->exec("CREATE TABLE class_table(class_name varchar(10),class_ID int)");

}

School::~School()
{
    delete ui;
}
