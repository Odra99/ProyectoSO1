#include "rama.h"
#include <unistd.h>
#include <sstream>
#include <sys/prctl.h>
#include <QDebug>
#include "hoja.h"

rama::rama(int id,int nH)
{
ramaN=id;
hojasN =nH;

pid = fork();
 if(pid==0){
     std::ostringstream s;
     s<< "Rama"<<id<<"_";
     std:: string nombreM(s.str());
     int n = nombreM.length();
     char nombre[n + 1];
     strcpy(nombre, nombreM.c_str());
     prctl(PR_SET_NAME,nombre,NULL,NULL,NULL);
    for(int i=0;i<nH;i++){
        if(i>0 && hojas.at(i-1).pid==0){
        break;
        }
        hojas.append(hoja(i+1,id));
    }
    sleep(10);
 }

}


int rama::obtenerPid(){
    return pid;
}


int rama::obtenerRamaId(){
    return ramaN;
}

int rama::obtenerHojasN(){
    return hojasN;
}
