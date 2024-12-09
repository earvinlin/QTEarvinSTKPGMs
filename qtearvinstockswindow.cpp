#include "qtearvinstockswindow.h"
#include "./ui_qtearvinstockswindow.h"

QTEarvinStocksWindow::QTEarvinStocksWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QTEarvinStocksWindow)
{
    ui->setupUi(this);
}

QTEarvinStocksWindow::~QTEarvinStocksWindow()
{
    delete ui;
}
