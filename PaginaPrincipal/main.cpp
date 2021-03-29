#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
using namespace std;

typedef struct sem_Main{
    sem_t *interfaz;
    sem_t *creador;
} sem_Main;


int main(int argc, char *argv[]){



}
