#include "qcount.h"
#include "ui_qcount.h"
#include"Count_two.h"
#include <QMessageBox>
Interaction jawell;
Formula formula;
Mycount mcount;
QApplication *app;
qcount::qcount(QWidget *parent) :QMainWindow(parent), ui(new Ui::qcount)
{
    ui->setupUi(this);
    srand(time(0));
    ui->label->setText("CLICK BUTTON");
    ui->label_2->setText("The number of correct answers is 0");
}

qcount::~qcount()
{
    delete ui;
}

void qcount::on_pushButton_clicked()
{
    double ans;
    ans=ui->lineEdit->text().toDouble();
    if(ans==jawell.rightanser){
          QMessageBox::information(this,"Right","Your answer is right!!!");
          jawell.rightnum++;
    }else{
        char te[10];string t="Wrong answer,right anwer is ";
        sprintf(te,"%.3lf",jawell.rightanser);t+=te;

        QMessageBox::information(this,"Wrong",t.c_str());
    }
    ui->lineEdit->clear();
    char te[10];string t="The number of correct answers is ";
    sprintf(te,"%d",jawell.rightnum);t+=te;
    ui->label_2->setText(t.c_str());
    change_EX();
}
void qcount::change_EX(){
    formula.randomNumber();
    formula.randomOperation();
    while(!formula.generateExpression(jawell,mcount)){
        formula.randomNumber();
        formula.randomOperation();
    }
    ui->label->setText(jawell.out.c_str());
    ui->lineEdit->clear();
}

void qcount::on_pushButton_2_clicked()
{
    if(ui->pushButton_2->text()=="COME TO AN END"){
         app->exit(0);
    }
    change_EX();
    ui->pushButton_2->setText("COME TO AN END");
}
