#ifndef QTEARVINSTOCKSWINDOW_H
#define QTEARVINSTOCKSWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class QTEarvinStocksWindow;
}
QT_END_NAMESPACE

class QTEarvinStocksWindow : public QMainWindow
{
    Q_OBJECT

public:
    QTEarvinStocksWindow(QWidget *parent = nullptr);
    ~QTEarvinStocksWindow();

private:
    Ui::QTEarvinStocksWindow *ui;
};
#endif // QTEARVINSTOCKSWINDOW_H
