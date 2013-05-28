/********************************************************************************
** Form generated from reading UI file 'nazem2.ui'
**
** Created: Tue May 28 10:55:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAZEM2_H
#define UI_NAZEM2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nazem2
{
public:
    QTableWidget *tableWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Nazem2)
    {
        if (Nazem2->objectName().isEmpty())
            Nazem2->setObjectName(QString::fromUtf8("Nazem2"));
        Nazem2->resize(573, 406);
        tableWidget = new QTableWidget(Nazem2);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 90, 541, 251));
        horizontalLayoutWidget = new QWidget(Nazem2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 30, 494, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayoutWidget_2 = new QWidget(Nazem2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(40, 360, 204, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);


        retranslateUi(Nazem2);

        QMetaObject::connectSlotsByName(Nazem2);
    } // setupUi

    void retranslateUi(QWidget *Nazem2)
    {
        Nazem2->setWindowTitle(QApplication::translate("Nazem2", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Nazem2", "\331\206\330\247\331\205 ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Nazem2", "\331\206\331\205\330\261\331\207 \330\247\331\206\330\266\330\250\330\247\330\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Nazem2", "\331\205\331\210\330\261\330\257 \330\247\331\206\330\266\330\250\330\247\330\267\333\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Nazem2", "\330\252\330\247\330\256\333\214\330\261", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Nazem2", "\330\272\333\214\330\250\330\252", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Nazem2", "\331\206\330\247\331\205 \330\257\330\250\333\214\330\261", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Nazem2", "\330\255\330\260\331\201 \332\251\330\261\330\257\331\206 \330\257\330\247\331\206\330\264 \330\242\331\205\331\210\330\262", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Nazem2", "\330\247\330\266\330\247\331\201\331\207 \332\251\330\261\330\257\331\206 \330\257\330\247\331\206\330\264 \330\242\331\205\331\210\330\262", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Nazem2", "\330\250\330\247\330\262\332\257\330\264\330\252", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Nazem2", "\330\260\330\256\333\214\330\261\331\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Nazem2: public Ui_Nazem2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAZEM2_H
