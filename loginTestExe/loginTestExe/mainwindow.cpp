#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // pri = new
   // ui->labelPin *display;
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::numPressed()
{
    QPushButton *button =(QPushButton*)sender();

    QString butVal = button->text();
    QString dispVal = ui->labelPin->text();
    QString newVal = dispVal + butVal;
     ui->labelPin->setText(newVal);
}

/*void MainWindow::loginAction(bool response)
{
    if(response == true){
        ui->labelName->setText("Hellurei");
    }
    if(response == false){
        ui->labelName->setText("ERROR");
    }
}
*/
void MainWindow::on_Button_1_clicked()
{
    numPressed();
    //ui->labelPin->setText(QString::number(1));
}

void MainWindow::on_Button_2_clicked()
{
     numPressed();
}

void MainWindow::on_Button_3_clicked()
{
     numPressed();
}

void MainWindow::on_Button_4_clicked()
{
    numPressed();
}

void MainWindow::on_Button_5_clicked()
{
     numPressed();
}

void MainWindow::on_Button_6_clicked()
{
     numPressed();
}

void MainWindow::on_Button_7_clicked()
{
     numPressed();
}

void MainWindow::on_Button_8_clicked()
{
    numPressed();
}

void MainWindow::on_Button_9_clicked()
{
     numPressed();
}

void MainWindow::on_Button_0_clicked()
{
     numPressed();
}

void MainWindow::on_Delete_clicked()
{
    ui->labelPin->setText("");
}

void MainWindow::on_okButton_clicked()
{
    QString pinCode = ui->labelPin->text();
   // objectRestapi->login(ui->labelPin->text(), ui->labelPin->text());
    ui->labelName->setText(pinCode);
    ui->labelPin->setText(" ");

}
