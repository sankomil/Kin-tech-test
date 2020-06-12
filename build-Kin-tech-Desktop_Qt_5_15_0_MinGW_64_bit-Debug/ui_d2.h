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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *box_button;
    QPushButton *cup_button;

    void setupUi(QDialog *d2)
    {
        if (d2->objectName().isEmpty())
            d2->setObjectName(QString::fromUtf8("d2"));
        d2->resize(612, 388);
        label = new QLabel(d2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 10, 281, 71));
        label->setStyleSheet(QString::fromUtf8("font: 26pt \"MS Shell Dlg 2\";"));
        back_button = new QPushButton(d2);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(230, 290, 131, 61));
        widget = new QWidget(d2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 140, 401, 101));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        box_button = new QPushButton(widget);
        box_button->setObjectName(QString::fromUtf8("box_button"));

        horizontalLayout->addWidget(box_button);

        cup_button = new QPushButton(widget);
        cup_button->setObjectName(QString::fromUtf8("cup_button"));

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
