#ifndef RAMA_H
#define RAMA_H
#include <string>
#include "hoja.h"
using namespace std;

class rama
{
public:
    rama(int,int);
    rama();
    int pid;
    int ramaN;
    int hojasN;
    hoja * hojas = new hoja[10];
    int obtenerPid();
    int obtenerRamaId();
    int obtenerHojasN();


};

#endif // RAMA_H
