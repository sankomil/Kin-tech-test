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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_d3_pillbox
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *session_button;
    QPushButton *pushButton_2;
    QDateTimeEdit *dateTimeEdit;

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

        session_button = new QPushButton(layoutWidget);
        session_button->setObjectName(QString::fromUtf8("session_button"));

        horizontalLayout->addWidget(session_button);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        dateTimeEdit = new QDateTimeEdit(d3_pillbox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(140, 130, 271, 41));

        retranslateUi(d3_pillbox);

        QMetaObject::connectSlotsByName(d3_pillbox);
    } // setupUi

    void retranslateUi(QDialog *d3_pillbox)
    {
        d3_pillbox->setWindowTitle(QCoreApplication::translate("d3_pillbox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("d3_pillbox", "Select Session(s)", nullptr));
        pushButton->setText(QCoreApplication::translate("d3_pillbox", "Back", nullptr));
        session_button->setText(QCoreApplication::translate("d3_pillbox", "Add Session", nullptr));
        pushButton_2->setText(QCoreApplication::translate("d3_pillbox", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class d3_pillbox: public Ui_d3_pillbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3_PILLBOX_H
