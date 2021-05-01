/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Button_1;
    QPushButton *Button_4;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_7;
    QPushButton *Button_5;
    QPushButton *Button_8;
    QPushButton *Button_6;
    QPushButton *Button_9;
    QPushButton *okButton;
    QPushButton *Delete;
    QPushButton *Button_0;
    QLabel *labelPin;
    QLabel *labelName;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(250, 250, 51, 51));
        QFont font;
        font.setPointSize(14);
        Button_1->setFont(font);
        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(250, 320, 51, 51));
        Button_4->setFont(font);
        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(350, 250, 51, 51));
        Button_2->setFont(font);
        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(440, 250, 51, 51));
        Button_3->setFont(font);
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(250, 400, 51, 51));
        Button_7->setFont(font);
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(350, 320, 51, 51));
        Button_5->setFont(font);
        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(350, 400, 51, 51));
        Button_8->setFont(font);
        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(440, 320, 51, 51));
        Button_6->setFont(font);
        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(440, 400, 51, 51));
        Button_9->setFont(font);
        okButton = new QPushButton(centralwidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(350, 480, 51, 51));
        okButton->setFont(font);
        Delete = new QPushButton(centralwidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(440, 480, 51, 51));
        Delete->setFont(font);
        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(250, 480, 51, 51));
        Button_0->setFont(font);
        labelPin = new QLabel(centralwidget);
        labelPin->setObjectName(QString::fromUtf8("labelPin"));
        labelPin->setGeometry(QRect(250, 170, 241, 51));
        labelPin->setFrameShape(QFrame::Box);
        labelName = new QLabel(centralwidget);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setGeometry(QRect(560, 40, 211, 31));
        labelName->setFrameShape(QFrame::Box);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(252, 100, 231, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        okButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        Delete->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelPin->setText(QString());
        labelName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
