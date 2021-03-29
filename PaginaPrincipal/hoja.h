#ifndef HOJA_H
#define HOJA_H
#include <string>

using namespace std;
class hoja
{
public:
    hoja(int);
    hoja();
    int hojaN;
    int pid;

    int obtenerPid();
    int obtenerPidP();
    int obtenerHojaN();

};

#endif // HOJA_H
