/********************************************************************************
** Form generated from reading UI file 'nazem1.ui'
**
** Created: Tue May 28 11:10:07 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAZEM1_H
#define UI_NAZEM1_H

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

class Ui_Nazem1
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QWidget *Nazem1)
    {
        if (Nazem1->objectName().isEmpty())
            Nazem1->setObjectName(QString::fromUtf8("Nazem1"));
        Nazem1->resize(400, 300);
        verticalLayoutWidget = new QWidget(Nazem1);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 70, 251, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        horizontalLayoutWidget = new QWidget(Nazem1);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(39, 229, 111, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        label = new QLabel(Nazem1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(255, 30, 111, 20));

        retranslateUi(Nazem1);

        QMetaObject::connectSlotsByName(Nazem1);
    } // setupUi

    void retranslateUi(QWidget *Nazem1)
    {
        Nazem1->setWindowTitle(QApplication::translate("Nazem1", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Nazem1", "\331\210\330\261\331\210\330\257 \331\206\331\205\330\261\330\247\330\252 \331\210 \330\253\330\250\330\252 \331\205\331\210\330\247\330\261\330\257 \330\247\331\206\330\266\330\250\330\247\330\267\333\214", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Nazem1", "\331\205\330\264\330\247\331\207\330\257\331\207 \331\206\331\205\330\261\330\247\330\252", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Nazem1", "\330\256\330\261\331\210\330\254", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Nazem1", "\331\206\330\247\330\270\331\205 \330\256\331\210\330\264 \330\242\331\205\330\257\333\214\330\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Nazem1: public Ui_Nazem1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAZEM1_H
