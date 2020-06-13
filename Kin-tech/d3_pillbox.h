#ifndef D3_PILLBOX_H
#define D3_PILLBOX_H

#include <QDialog>

namespace Ui {
class d3_pillbox;
}

class d3_pillbox : public QDialog
{
    Q_OBJECT

public:
    explicit d3_pillbox(QWidget *parent = nullptr);
    ~d3_pillbox();

private slots:
    void on_pushButton_clicked();



    void on_pushButton_2_clicked();

private:
    Ui::d3_pillbox *ui;
    QWidget* parent;
    QString date[7];
    QString time[7];
    int sessions;
};

#endif // D3_PILLBOX_H
