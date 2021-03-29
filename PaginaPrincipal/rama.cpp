#include "rama.h"
#include <unistd.h>
#include <sstream>
#include <sys/prctl.h>


rama::rama(int id,int nH)
{
ramaN=id;
hojasN =nH;

pid = fork();
 if(pid==0){
    for(int i=0;i<nH;i++){
        if(i>0 && hojas[i-1].obtenerPid()==0){
        break;
        }
        hojas[i] = hoja(i+1);
    }
 }

}


int rama::obtenerPid(){
    return pid;
}

int rama::obtenerPidP(){
    return pidP;
}

int rama::obtenerRamaId(){
    return ramaN;
}

int rama::obtenerHojasN(){
    return hojasN;
}
