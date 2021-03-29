#include "planta.h"
#include <unistd.h>
#include <sstream>
#include <sys/prctl.h>

planta::planta(int id,int rN,int hN)
{
    idPlanta=id;

    pid_t pid = fork();
    if(!pid){
        for(int i = 0;i<rN;i++){
            if(i>0&&ramas[i-1].obtenerPid()==0){
                break;
            }
            ramas[i] = rama(i+1,hN);
        }
    }else{

    }

}
