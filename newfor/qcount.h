#ifndef QCOUNT_H
#define QCOUNT_H

#include <QMainWindow>

namespace Ui {
class qcount;
}

class qcount : public QMainWindow
{
    Q_OBJECT

public:
    explicit qcount(QWidget *parent = 0);
    ~qcount();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void change_EX();
private:
    Ui::qcount *ui;
};

#endif // QCOUNT_H
