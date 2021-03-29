#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
#include <fstream>

using namespace std;

typedef struct Hoja{
    int numero;
    QLabel label;
} Hoja;

typedef struct Rama{
    sem_t * sem_hojas = new sem_t[10];
    int numero;
    QLabel label;
    Hoja *hojas = new Hoja[10];
} Rama;

typedef struct Tronco {
    sem_t *sem_rama = new sem_t[5];
    int numero_ramas;
    int numero_hojas;
    QLabel label;
    Rama * ramas = new Rama[5];
} Tronco;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    agruparHojas();
    agruparRamas();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::animar(){

    sem_t *tronco = sem_open("/test1", O_CREAT, S_IRUSR | S_IWUSR, 0);
    sem_t *hojas = sem_open("/test2", O_CREAT, S_IRUSR | S_IWUSR, 0);
    sem_t *ramas = sem_open("/test3", O_CREAT, S_IRUSR | S_IWUSR, 0);
    sem_init(tronco,1,0);
    sem_init(hojas,1,0);
    sem_init(ramas,1,0);



}

void MainWindow::colorear(QLabel* label){



}



void MainWindow::agruparRamas(){
    ramas.append(ui->rama1);
    ramas.append(ui->rama2);
    ramas.append(ui->rama3);
    ramas.append(ui->rama4);
    ramas.append(ui->rama5);
}
void MainWindow::agruparHojas(){
    hojas1.append(ui->hoja11);
    hojas1.append(ui->hoja12);
    hojas1.append(ui->hoja14);
    hojas1.append(ui->hoja13);
    hojas1.append(ui->hoja15);
    hojas2.append(ui->hoja21);
    hojas2.append(ui->hoja22);
    hojas2.append(ui->hoja24);
    hojas2.append(ui->hoja23);
    hojas2.append(ui->hoja25);
    hojas3.append(ui->hoja31);
    hojas3.append(ui->hoja32);
    hojas3.append(ui->hoja34);
    hojas3.append(ui->hoja35);
    hojas3.append(ui->hoja33);
    hojas4.append(ui->hoja41);
    hojas4.append(ui->hoja42);
    hojas4.append(ui->hoja44);
    hojas4.append(ui->hoja45);
    hojas4.append(ui->hoja43);
    hojas5.append(ui->hoja51);
    hojas5.append(ui->hoja52);
    hojas5.append(ui->hoja54);
    hojas5.append(ui->hoja55);
    hojas5.append(ui->hoja53);

}

void MainWindow::on_pushButton_clicked()
{
    while(1){
        ifstream fe("buffer.txt");
        string linea;
        string instruccion;
        int planta;
        int ramas;
        int hojas;
        while (getline(fe,linea)) {
            linea.pop_back();
            instruccion = linea[1];
            planta = std::stoi(&linea[3]);
            if(linea.size()==7){
                ramas = std::stoi(&linea[5]);
            }else if(linea.size()==9){
            ramas = std::stoi(&linea[5]);
            hojas = std::stoi(&linea[7]);
            }
            if(instruccion=="P"){

            }else if(instruccion=="M"){

            }else{

            }

        }
        fe.close();

    }
}
