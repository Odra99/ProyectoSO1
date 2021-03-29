#include "entradaframe.h"
#include "ui_entradaframe.h"
#include <string>
#include <QLabel>

using namespace std;

entradaFrame::entradaFrame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::entradaFrame)
{
    ui->setupUi(this);

}

entradaFrame::~entradaFrame()
{
    delete ui;
}

void entradaFrame::on_instructionInput_returnPressed()
{
    QString input_instruction = ui->instructionInput->text();
    ui->instructionText->setText(input_instruction);
    ui->instructionInput->setText("");
    fichero =fopen("buffer.txt","wt");
    fputs(input_instruction.toUtf8().constData(),fichero);
    fclose(fichero);



}

void entradaFrame::on_execute_clicked()
{
    QString input_instruction = ui->instructionInput->text();
    ui->instructionText->setText(input_instruction);
    ui->instructionInput->setText("");
    fichero =fopen("buffer.txt","wt");
    fputs(input_instruction.toUtf8().constData(),fichero);
    fclose(fichero);
}
