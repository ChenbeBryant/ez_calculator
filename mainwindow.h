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

private:
    Ui::MainWindow *ui;
    char  input_num;
    QString curr_display = "";
};

#endif // MAINWINDOW_H
