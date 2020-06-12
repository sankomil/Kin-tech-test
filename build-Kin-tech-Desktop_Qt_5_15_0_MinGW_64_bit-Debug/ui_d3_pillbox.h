/********************************************************************************
** Form generated from reading UI file 'd3_pillbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D3_PILLBOX_H
#define UI_D3_PILLBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_d3_pillbox
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;

    void setupUi(QDialog *d3_pillbox)
    {
        if (d3_pillbox->objectName().isEmpty())
            d3_pillbox->setObjectName(QString::fromUtf8("d3_pillbox"));
        d3_pillbox->resize(537, 379);
        label = new QLabel(d3_pillbox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 301, 81));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"MS Shell Dlg 2\";"));
        widget = new QWidget(d3_pillbox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 120, 141, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);


        retranslateUi(d3_pillbox);

        QMetaObject::connectSlotsByName(d3_pillbox);
    } // setupUi

    void retranslateUi(QDialog *d3_pillbox)
    {
        d3_pillbox->setWindowTitle(QCoreApplication::translate("d3_pillbox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("d3_pillbox", "Select Session(s)", nullptr));
        checkBox_5->setText(QCoreApplication::translate("d3_pillbox", "Date 1", nullptr));
        checkBox->setText(QCoreApplication::translate("d3_pillbox", "Date 2", nullptr));
        checkBox_2->setText(QCoreApplication::translate("d3_pillbox", "Date 3", nullptr));
        checkBox_3->setText(QCoreApplication::translate("d3_pillbox", "Date 4", nullptr));
        checkBox_4->setText(QCoreApplication::translate("d3_pillbox", "Date 5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class d3_pillbox: public Ui_d3_pillbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3_PILLBOX_H
