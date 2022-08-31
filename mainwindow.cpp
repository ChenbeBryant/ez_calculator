#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(this->ui->NUM_1,signal(on_NUM_1_clicked),this->ui->display_window,signal(on_display_window_windowIconTextChanged));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_NUM_1_clicked()
{
    input_num='1';
   // ui->display_window->
   // qDebug() << ui->display_window->text();
   curr_display =ui->display_window->text();
   ui->display_window->setText(curr_display+"1");
   // qDebug() << ui->display_window->text();
}

void MainWindow::on_NUM_2_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+"2");
}

void MainWindow::on_NUM_3_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+"3");
}

void MainWindow::on_NUM_4_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+"4");
}

void MainWindow::on_NUM_5_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+"5");
}

void MainWindow::on_NUM_6_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+"6");
}

void MainWindow::on_NUM_7_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+"7");
}

void MainWindow::on_NUM_8_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+"8");
}

void MainWindow::on_NUM_9_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+"9");
}

void MainWindow::on_NUM_0_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+"0");
}

void MainWindow::on_NUM_DEL_clicked()
{
    curr_display =ui->display_window->text();
    ui->display_window->setText(curr_display+".");
}

void MainWindow::on_display_window_windowIconTextChanged(const QString &iconText)
{

}

void MainWindow::on_NUM_CLEAR_clicked()
{
     ui->display_window->clear();
}
