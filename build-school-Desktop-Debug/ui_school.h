/********************************************************************************
** Form generated from reading UI file 'school.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHOOL_H
#define UI_SCHOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_School
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *School)
    {
        if (School->objectName().isEmpty())
            School->setObjectName(QStringLiteral("School"));
        School->resize(400, 300);
        menuBar = new QMenuBar(School);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        School->setMenuBar(menuBar);
        mainToolBar = new QToolBar(School);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        School->addToolBar(mainToolBar);
        centralWidget = new QWidget(School);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        School->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(School);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        School->setStatusBar(statusBar);

        retranslateUi(School);

        QMetaObject::connectSlotsByName(School);
    } // setupUi

    void retranslateUi(QMainWindow *School)
    {
        School->setWindowTitle(QApplication::translate("School", "School", 0));
    } // retranslateUi

};

namespace Ui {
    class School: public Ui_School {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHOOL_H
