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

private:
    Ui::d3_pillbox *ui;
};

#endif // D3_PILLBOX_H
