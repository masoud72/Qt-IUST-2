#ifndef SCHOOL_H
#define SCHOOL_H

#include <QWidget>
#include <QString>
#include "nazem1.h"
#include "moalem1.h"

namespace Ui {
class School;
}

class School : public QWidget
{
    Q_OBJECT
    
public:
    explicit School(QWidget *parent = 0);
    ~School();
    Nazem1 na1;
    
private slots:
    void on_pushButton_2_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::School *ui;
    QString user;
    QString pass;


};

#endif // SCHOOL_H
