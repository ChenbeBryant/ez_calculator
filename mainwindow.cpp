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

int  MainWindow::judge_dot(QString exp_str)
{
    for (int i =0 ; i < exp_str.size() ; i++)
    {
        if (exp_str[i] == '.')
            return 1;
    }
    return 0;
}

int MainWindow::judge_zero(QString exp_str)
{
    if (exp_str.size() == 0)
        return 1;
}

void MainWindow::on_NUM_1_clicked()
{
   // qDebug() << ui->display_window->text();
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"1");
}

void MainWindow::on_NUM_2_clicked()
{
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"2");
}

void MainWindow::on_NUM_3_clicked()
{
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"3");
}

void MainWindow::on_NUM_4_clicked()
{
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"4");
}

void MainWindow::on_NUM_5_clicked()
{
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"5");
}

void MainWindow::on_NUM_6_clicked()
{
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"6");
}

void MainWindow::on_NUM_7_clicked()
{
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"7");
}

void MainWindow::on_NUM_8_clicked()
{
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"8");
}

void MainWindow::on_NUM_9_clicked()
{
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"9");
}

void MainWindow::on_NUM_0_clicked()
{
    curr_display =ui->display_window->text();
    if(curr_display[0] == '0' && curr_display.size()==1)
        return;
    ui->display_window->setText(curr_display+"0");
}

void MainWindow::on_NUM_DEL_clicked()
{
    curr_display =ui->display_window->text();
    if (!judge_dot(curr_display))
      ui->display_window->setText(curr_display+".");
    else
        return;
}

void MainWindow::on_display_window_windowIconTextChanged(const QString &iconText)
{

}

void MainWindow::on_NUM_CLEAR_clicked()
{
     ui->display_window->clear();
}

void MainWindow::on_BUT_MINUS_clicked()
{
    curr_display = ui->display_window->text();
    if (curr_display.contains('-'))
        return;
    else
        ui->display_window->setText(curr_display+"-");
}

void MainWindow::on_BUT_PLUS_clicked()
{
    exp_total =ui->display_window->text();

}

void MainWindow::on_BUT_MUTI_clicked()
{

}

void MainWindow::on_pushButton_4_clicked()
{

}
