#ifndef D2_H
#define D2_H

#include <QDialog>
#include "d3_cup.h"
#include "d3_pillbox.h"


namespace Ui {
class d2;
}

class d2 : public QDialog
{
    Q_OBJECT

public:
    explicit d2(QWidget *parent = nullptr);
    ~d2();

private slots:
    void on_box_button_clicked();

    void on_cup_button_clicked();

    void on_back_button_clicked();

private:
    Ui::d2 *ui;
    d3_cup *Cup;
    d3_pillbox *Pillbox;
    QWidget* parent;
};

#endif // D2_H
