#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
#include "entradaframe.h"
#include "mainwindow.h"
#include <QApplication>

typedef struct {
    sem_t *one;
    sem_t *two;
} SemPair;

int main(int argc,  char *argv[]) {


            QApplication a(argc, argv);
                entradaFrame e;
                MainWindow w;
                e.show();
                w.show();
                return a.exec();



}


