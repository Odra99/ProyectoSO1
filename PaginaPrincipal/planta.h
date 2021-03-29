#ifndef PLANTA_H
#define PLANTA_H
#include <string>
#include "rama.h"
using namespace std;

class planta
{
public:
    planta(int ,int ,int );
    planta();
    int idPlanta;
    int pid;
    rama * ramas = new rama[5];
};

#endif // PLANTA_H
