/********************************************************************************
** Form generated from reading UI file 'moalem1.ui'
**
** Created: Wed May 29 20:43:06 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOALEM1_H
#define UI_MOALEM1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Moalem1
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Moalem1)
    {
        if (Moalem1->objectName().isEmpty())
            Moalem1->setObjectName(QString::fromUtf8("Moalem1"));
        Moalem1->resize(400, 300);
        label = new QLabel(Moalem1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 111, 31));
        horizontalLayoutWidget = new QWidget(Moalem1);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 60, 241, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        verticalLayoutWidget = new QWidget(Moalem1);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(49, 229, 161, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Moalem1);

        QMetaObject::connectSlotsByName(Moalem1);
    } // setupUi

    void retranslateUi(QWidget *Moalem1)
    {
        Moalem1->setWindowTitle(QApplication::translate("Moalem1", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Moalem1", "\331\205\330\271\331\204\331\205 \330\256\331\210\330\264 \330\242\331\205\330\257\333\214\330\257", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Moalem1", "\330\253\330\250\330\252 \331\206\331\205\330\261\330\247\330\252 ", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Moalem1", "\330\256\330\261\331\210\330\254", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Moalem1: public Ui_Moalem1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOALEM1_H
