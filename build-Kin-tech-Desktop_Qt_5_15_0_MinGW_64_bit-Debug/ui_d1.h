/********************************************************************************
** Form generated from reading UI file 'd1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D1_H
#define UI_D1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_d1
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *session_button;
    QPushButton *pill_button;
    QPushButton *back_button;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *d1)
    {
        if (d1->objectName().isEmpty())
            d1->setObjectName(QString::fromUtf8("d1"));
        d1->resize(839, 431);
        d1->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(37, 136, 142);"));
        centralwidget = new QWidget(d1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 130, 491, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        session_button = new QPushButton(layoutWidget);
        session_button->setObjectName(QString::fromUtf8("session_button"));
        session_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(37, 136, 143);\n"
"font-weight: bold;"));

        horizontalLayout->addWidget(session_button);

        pill_button = new QPushButton(layoutWidget);
        pill_button->setObjectName(QString::fromUtf8("pill_button"));
        pill_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(37, 136, 143);\n"
"font-weight: bold;"));

        horizontalLayout->addWidget(pill_button);


        verticalLayout->addLayout(horizontalLayout);

        back_button = new QPushButton(layoutWidget);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(37, 136, 143);\n"
"font-weight: bold;"));

        verticalLayout->addWidget(back_button);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 30, 251, 61));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 24pt \"Rockwell\";"));
        d1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(d1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 839, 26));
        d1->setMenuBar(menubar);
        statusbar = new QStatusBar(d1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        d1->setStatusBar(statusbar);

        retranslateUi(d1);

        QMetaObject::connectSlotsByName(d1);
    } // setupUi

    void retranslateUi(QMainWindow *d1)
    {
        d1->setWindowTitle(QCoreApplication::translate("d1", "d1", nullptr));
        session_button->setText(QCoreApplication::translate("d1", "By Session", nullptr));
        pill_button->setText(QCoreApplication::translate("d1", "Specific Pill", nullptr));
        back_button->setText(QCoreApplication::translate("d1", "Back", nullptr));
        label->setText(QCoreApplication::translate("d1", "Dispense", nullptr));
    } // retranslateUi

};

namespace Ui {
    class d1: public Ui_d1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D1_H
