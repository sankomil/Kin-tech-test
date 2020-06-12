#ifndef D3_CUP_H
#define D3_CUP_H

#include <QDialog>

namespace Ui {
class d3_cup;
}

class d3_cup : public QDialog
{
    Q_OBJECT

public:
    explicit d3_cup(QWidget *parent = nullptr);
    ~d3_cup();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::d3_cup *ui;
    QWidget* parent;
};

#endif // D3_CUP_H
