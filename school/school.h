#ifndef SCHOOL_H
#define SCHOOL_H

#include <QMainWindow>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
namespace Ui {
class School;
}

class School : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit School(QWidget *parent = 0);
    ~School();
    
private:
    Ui::School *ui;
    QSqlDatabase  school_=QSqlDatabase::addDatabase("QMYSQL");
    QSqlQuery* q_School_;
    void configureDataBase();
    void configureTables();

};

#endif // SCHOOL_H
