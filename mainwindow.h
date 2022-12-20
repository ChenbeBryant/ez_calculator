#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QDebug>
#include <QString>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_NUM_1_clicked();
    void on_NUM_2_clicked();
    void on_NUM_3_clicked();
    void on_NUM_4_clicked();
    void on_NUM_5_clicked();
    void on_NUM_6_clicked();
    void on_NUM_7_clicked();
    void on_NUM_8_clicked();
    void on_NUM_9_clicked();
    void on_NUM_0_clicked();
    void on_NUM_DEL_clicked();
    void on_display_window_windowIconTextChanged(const QString &iconText);

    void on_NUM_CLEAR_clicked();

    void on_BUT_MINUS_clicked();

    void on_BUT_PLUS_clicked();

    void on_BUT_MUTI_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    char  input_num;
    QString curr_display = "";
    QString exp_total = "";
    QString exp_curr = "";
    float exp_total_f = 0;
    float exp_curr_f = 0;
    int judge_dot(QString exp_str);
    int judge_zero(QString exp_str);
};

#endif // MAINWINDOW_H
