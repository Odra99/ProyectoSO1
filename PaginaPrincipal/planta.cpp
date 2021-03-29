#include "planta.h"
#include <unistd.h>
#include <sstream>
#include <sys/prctl.h>
#include <QtDebug>
#include "rama.h"



planta::planta(int id,int rN,int hN)
{
    idPlanta=id;
    hojasN = hN;
    ramasN=rN;
    pid_t pid = fork();
    if(pid==0){
        std::ostringstream s;
        s<< "Planta"<<id<<"_";
        std:: string nombreM(s.str());
        int n = nombreM.length();
        char nombre[n + 1];
        strcpy(nombre, nombreM.c_str());
        prctl(PR_SET_NAME,nombre,NULL,NULL,NULL);
        for(int i = 0;i<rN;i++){
            if(i>0&&ramas.at(i-1).pid==0){
                break;
            }
            ramas.append(rama(i+1,hN));
        }
        sleep(10);
    }

}



int planta::obtenerHojasN(){
    return hojasN;
}

int planta::obtenerRamasN(){
    return ramasN;
}
