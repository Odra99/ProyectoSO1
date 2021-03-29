#ifndef RAMA_H
#define RAMA_H
#include <string>
#include "hoja.h"
#include "QVector"
using namespace std;

class rama
{
public:
    rama(int,int);
    rama();
    int pid;
    int ramaN;
    int hojasN;
    QVector <hoja > hojas;
    int obtenerPid();
    int obtenerRamaId();
    int obtenerHojasN();


};

#endif // RAMA_H
