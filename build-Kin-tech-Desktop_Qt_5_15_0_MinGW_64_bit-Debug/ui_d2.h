/********************************************************************************
** Form generated from reading UI file 'd2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D2_H
#define UI_D2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_d2
{
public:
    QLabel *label;
    QPushButton *back_button;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *box_button;
    QPushButton *cup_button;

    void setupUi(QDialog *d2)
    {
        if (d2->objectName().isEmpty())
            d2->setObjectName(QString::fromUtf8("d2"));
        d2->resize(638, 411);
        d2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(37, 136, 142);"));
        label = new QLabel(d2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 10, 281, 71));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 24pt \"Rockwell\";"));
        back_button = new QPushButton(d2);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(240, 310, 131, 31));
        back_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(37, 136, 143);\n"
"font-weight: bold;"));
        layoutWidget = new QWidget(d2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 140, 401, 101));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        box_button = new QPushButton(layoutWidget);
        box_button->setObjectName(QString::fromUtf8("box_button"));
        box_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(37, 136, 143);\n"
"font-weight: bold;"));

        horizontalLayout->addWidget(box_button);

        cup_button = new QPushButton(layoutWidget);
        cup_button->setObjectName(QString::fromUtf8("cup_button"));
        cup_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(37, 136, 143);\n"
"font-weight: bold;"));

        horizontalLayout->addWidget(cup_button);


        retranslateUi(d2);

        QMetaObject::connectSlotsByName(d2);
    } // setupUi

    void retranslateUi(QDialog *d2)
    {
        d2->setWindowTitle(QCoreApplication::translate("d2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("d2", "Dispense to", nullptr));
        back_button->setText(QCoreApplication::translate("d2", "Back", nullptr));
        box_button->setText(QCoreApplication::translate("d2", "Pillbox", nullptr));
        cup_button->setText(QCoreApplication::translate("d2", "Cup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class d2: public Ui_d2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D2_H
