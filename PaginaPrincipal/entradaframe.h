#ifndef ENTRADAFRAME_H
#define ENTRADAFRAME_H
#include <QMainWindow>
#include <string>
#include <QLabel>
#include <stdlib.h>
#include <stdio.h>

namespace Ui {
class entradaFrame;
}
using namespace std;
class entradaFrame : public QMainWindow
{
    Q_OBJECT

public:

     entradaFrame(QWidget *parent = nullptr);
    ~entradaFrame();
FILE* fichero;

private slots:
    void on_instructionInput_returnPressed();
    void on_execute_clicked();

private:
    Ui::entradaFrame *ui;
};

#endif // ENTRADAFRAME_H
