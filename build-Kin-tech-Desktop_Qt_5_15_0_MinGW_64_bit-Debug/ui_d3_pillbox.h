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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_d3_pillbox
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;

    void setupUi(QDialog *d3_pillbox)
    {
        if (d3_pillbox->objectName().isEmpty())
            d3_pillbox->setObjectName(QString::fromUtf8("d3_pillbox"));
        d3_pillbox->resize(537, 379);
        label = new QLabel(d3_pillbox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 301, 81));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"MS Shell Dlg 2\";"));
        layoutWidget = new QWidget(d3_pillbox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 250, 461, 101));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        scrollArea = new QScrollArea(d3_pillbox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(80, 90, 401, 151));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 378, 325));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_10 = new QCheckBox(groupBox);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        verticalLayout->addWidget(checkBox_10);

        checkBox_6 = new QCheckBox(groupBox);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(groupBox);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout->addWidget(checkBox_7);

        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_8 = new QCheckBox(groupBox);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(groupBox);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        verticalLayout->addWidget(checkBox_9);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(d3_pillbox);

        QMetaObject::connectSlotsByName(d3_pillbox);
    } // setupUi

    void retranslateUi(QDialog *d3_pillbox)
    {
        d3_pillbox->setWindowTitle(QCoreApplication::translate("d3_pillbox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("d3_pillbox", "Select Session(s)", nullptr));
        pushButton->setText(QCoreApplication::translate("d3_pillbox", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("d3_pillbox", "Confirm", nullptr));
        groupBox->setTitle(QCoreApplication::translate("d3_pillbox", "Available Sessions", nullptr));
        checkBox->setText(QCoreApplication::translate("d3_pillbox", "Slot1", nullptr));
        checkBox_2->setText(QCoreApplication::translate("d3_pillbox", "Slot2", nullptr));
        checkBox_3->setText(QCoreApplication::translate("d3_pillbox", "Slot3", nullptr));
        checkBox_4->setText(QCoreApplication::translate("d3_pillbox", "Slot4", nullptr));
        checkBox_10->setText(QCoreApplication::translate("d3_pillbox", "Slot5", nullptr));
        checkBox_6->setText(QCoreApplication::translate("d3_pillbox", "Slot6", nullptr));
        checkBox_7->setText(QCoreApplication::translate("d3_pillbox", "Slot7", nullptr));
        checkBox_5->setText(QCoreApplication::translate("d3_pillbox", "Slot8", nullptr));
        checkBox_8->setText(QCoreApplication::translate("d3_pillbox", "Slot9", nullptr));
        checkBox_9->setText(QCoreApplication::translate("d3_pillbox", "Slot10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class d3_pillbox: public Ui_d3_pillbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3_PILLBOX_H
