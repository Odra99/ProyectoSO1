#ifndef TRONCO_H
#define TRONCO_H
#include <QLabel>
#include <QVector>

class tronco
{
public:
    tronco();
    QVector<QLabel *> ramas;
    QLabel figure_tronco;
    int pid;
    int pidP;
};

#endif // TRONCO_H
