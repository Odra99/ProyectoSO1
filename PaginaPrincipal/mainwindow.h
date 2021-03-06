#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLabel>
#include <QVector>

#include "planta.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
using namespace std;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector <QLabel *> ramas, hojas1, hojas2,hojas3,hojas4,hojas5;
    FILE *fichero;

private slots:
    void colorearTronco();
    void colorearRamas(int,int);
    void colorearHojas(int,QVector <QLabel*>);

    void animar(int,int,int);
    void agruparRamas();
    void agruparHojas();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
