#ifndef PLANTA_H
#define PLANTA_H
#include <string>
#include "rama.h"
#include "QVector"
using namespace std;

class planta
{
public:
    planta(int ,int ,int );
    planta();
    int idPlanta;
    int pid;
    int ramasN;
    int hojasN;
    QVector <rama > ramas;

    int obtenerRamasN();
    int obtenerHojasN();
};

#endif // PLANTA_H
