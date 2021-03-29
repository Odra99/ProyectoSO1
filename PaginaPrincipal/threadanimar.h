#ifndef THREADANIMAR_H
#define THREADANIMAR_H

#include <QThread>
using namespace std;
class ThreadAnimar:public QThread
{
public:
    explicit ThreadAnimar(QObject *parent = 0);
        void run();
        int planta=0;

    signals:
        void NuevoColor(int,int,int);

    public slots:
};

#endif // THREADANIMAR_H
