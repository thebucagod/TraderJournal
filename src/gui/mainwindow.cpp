#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // showFullScreen();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_maximizeB_clicked()
{
    if (isMaximized()) {
        showNormal();
    } else {
        showMaximized();
    }
}


void MainWindow::on_collapseB_clicked()
{
    showMinimized();
}

