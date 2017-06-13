/********************************************************************************
** Form generated from reading UI file 'qcount.ui'
**
** Created: Tue Jun 13 16:14:00 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCOUNT_H
#define UI_QCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qcount
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *Anser;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qcount)
    {
        if (qcount->objectName().isEmpty())
            qcount->setObjectName(QString::fromUtf8("qcount"));
        qcount->resize(510, 368);
        centralWidget = new QWidget(qcount);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 280, 261, 21));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 491, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 48pt \"Arial\";"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(110, 240, 291, 31));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Anser = new QLabel(widget1);
        Anser->setObjectName(QString::fromUtf8("Anser"));

        horizontalLayout->addWidget(Anser);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        qcount->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qcount);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 510, 23));
        qcount->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qcount);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qcount->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qcount);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qcount->setStatusBar(statusBar);

        retranslateUi(qcount);

        QMetaObject::connectSlotsByName(qcount);
    } // setupUi

    void retranslateUi(QMainWindow *qcount)
    {
        qcount->setWindowTitle(QApplication::translate("qcount", "qcount", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("qcount", "\344\275\240\347\255\224\345\257\271\347\232\204\351\242\230\347\233\256\346\225\260\344\270\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("qcount", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">TextLabel</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("qcount", "BEGING", 0, QApplication::UnicodeUTF8));
        Anser->setText(QApplication::translate("qcount", "Answer", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("qcount", "Submit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qcount: public Ui_qcount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCOUNT_H
