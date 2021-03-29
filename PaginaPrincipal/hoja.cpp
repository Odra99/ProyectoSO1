#include "hoja.h"
#include <unistd.h>
#include <sstream>
#include <sys/prctl.h>
#include <QDebug>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
hoja::hoja(int id,int idRama)
{

    hojaN = id;
    pid = fork();
    if (pid==0){
        std::ostringstream s;
        s<< "Hoja"<<id<<"_"<<idRama;
        std:: string nombreM(s.str());
        int n = nombreM.length();
        char nombre[n + 1];
        strcpy(nombre, nombreM.c_str());
        prctl(PR_SET_NAME,nombre,NULL,NULL,NULL);
        sleep(10);
    }
}

int hoja::obtenerHojaN(){
    return hojaN;
}

int hoja::obtenerPid(){
    return pid;
}

