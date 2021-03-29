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
#include<pthread.h>
#include "planta.h"
#include "rama.h"
#include "hoja.h"
using namespace std;

sem_t *troncoS = sem_open("/test1", O_CREAT, S_IRUSR | S_IWUSR, 0);
sem_t *hojasS = sem_open("/test2", O_CREAT, S_IRUSR | S_IWUSR, 0);
sem_t *ramasS = sem_open("/test3", O_CREAT, S_IRUSR | S_IWUSR, 0);
pthread_t tid[2];


QVector<planta> plantas;
int tronco=0;
int ramasN=0;
int hojasN=0;

int numeroRamas;
int numeroHojas;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    agruparHojas();
    agruparRamas();
    sem_init(troncoS,1,0);
    sem_init(hojasS,1,0);
    sem_init(ramasS,1,0);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::animar(int id,int ramasN,int hojasN){

//Iniciar procesos en paralelo


}



void MainWindow::colorearRamas(int n,int hojasN){
    while (1) {
        for (int i=0;i<n ;i++ ) {
            sem_wait(ramasS);
            switch(ramasN) {
              case 1:
               ramas.at(i)->setStyleSheet("background-color: rgb(0, 255, 255);");
               colorearHojas(hojasN,hojas1);
               ramasN=2;
                break;
              case 2:
                ramas.at(i)->setStyleSheet("background-color: rgb(255, 255, 0);");
                colorearHojas(hojasN,hojas2);
                ramasN=3;
                break;
            case 3:
                ramas.at(i)->setStyleSheet("background-color: rgb(0, 255, 0);");
                colorearHojas(hojasN,hojas3);
                ramasN=4;
                break;
             case 4:
                ramas.at(i)->setStyleSheet("background-color: rgb(255, 0 255);");
                colorearHojas(hojasN,hojas4);
                ramasN=0;
                break;
                default:
              ramas.at(i)->setStyleSheet("background-color: rgb(0, 0, 255);");
              colorearHojas(hojasN,hojas5);
              ramasN=1;
            }
            sleep(1);
            sem_post(troncoS);
        }
    }



}

void MainWindow::colorearHojas(int nH,QVector<QLabel*> hojas){
    while (1) {
        for (int i = 0;i<nH ;i++ ) {
            sem_wait(hojasS);

                if(hojasN==0){
                    hojasN=1;
                   hojas.at(i)->setStyleSheet("background-color: rgb(0, 0, 255);");

                }else{
                    hojasN=0;
                    hojas.at(i)->setStyleSheet("background-color: rgb(128, 64, 0);");
                }

            sleep(1);
            sem_post(ramasS);

        }
    }




}


void MainWindow::colorearTronco(){
    while (1) {
        sem_post(hojasS);
        sem_wait(troncoS);
            if(tronco==0){
            tronco=1;
            ui->troncoL->setStyleSheet("background-color: rgb(16, 12, 12);");

        }else{
            tronco=0;
            ui->troncoL->setStyleSheet("background-color: rgb(80, 80, 80);");
        }
        sleep(1);
    }


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
    hojas1.append(ui->hoja16);
    hojas1.append(ui->hoja17);
    hojas1.append(ui->hoja18);
    hojas1.append(ui->hoja19);
    hojas2.append(ui->hoja21);
    hojas2.append(ui->hoja22);
    hojas2.append(ui->hoja24);
    hojas2.append(ui->hoja23);
    hojas2.append(ui->hoja25);
    hojas2.append(ui->hoja26);
    hojas2.append(ui->hoja27);
    hojas2.append(ui->hoja28);
    hojas2.append(ui->hoja29);
    hojas3.append(ui->hoja31);
    hojas3.append(ui->hoja32);
    hojas3.append(ui->hoja34);
    hojas3.append(ui->hoja35);
    hojas3.append(ui->hoja33);
    hojas3.append(ui->hoja36);
    hojas3.append(ui->hoja37);
    hojas3.append(ui->hoja38);
    hojas3.append(ui->hoja39);
    hojas4.append(ui->hoja41);
    hojas4.append(ui->hoja42);
    hojas4.append(ui->hoja44);
    hojas4.append(ui->hoja45);
    hojas4.append(ui->hoja43);
    hojas3.append(ui->hoja46);
    hojas3.append(ui->hoja47);
    hojas3.append(ui->hoja48);
    hojas3.append(ui->hoja49);
    hojas5.append(ui->hoja51);
    hojas5.append(ui->hoja52);
    hojas5.append(ui->hoja54);
    hojas5.append(ui->hoja55);
    hojas5.append(ui->hoja53);
    hojas3.append(ui->hoja56);
    hojas3.append(ui->hoja57);
    hojas3.append(ui->hoja58);
    hojas3.append(ui->hoja59);
}

void MainWindow::on_pushButton_clicked()
{

        ifstream fe("buffer.txt");
        string linea;
        string instruccion;
        int plantaid;
        int ramas=0;
        int hojas=0;
        while (getline(fe,linea)) {
            linea.pop_back();
            instruccion = linea[1];
            plantaid = std::stoi(&linea[3]);
            if(linea.size()==7){
                ramas = std::stoi(&linea[5]);
            }else if(linea.size()==9){
            ramas = std::stoi(&linea[5]);
            hojas = std::stoi(&linea[7]);
            }
            if(instruccion=="P"){
            planta plantaaux = planta(plantaid,ramas,hojas);
            plantas.append(plantaaux);
            }else if(instruccion=="M"){
             planta aux = plantas.at(plantaid);
             animar(plantaid,aux.obtenerRamasN(),aux.obtenerHojasN());
            }else{

            }

        }
        fe.close();


}
