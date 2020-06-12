#ifndef D1_H
#define D1_H

#include <QMainWindow>
#include "d2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class d1; class d2; class d3_cup;class d3_pillbox;}
QT_END_NAMESPACE

class d1 : public QMainWindow
{
    Q_OBJECT

public:
    d1(QWidget *parent = nullptr);
    ~d1();

private slots:
    void on_back_button_clicked();

    void on_pill_button_clicked();

    void on_session_button_clicked();

private:
    Ui::d1 *ui;
    d2* D2;
};
#endif // D1_H
