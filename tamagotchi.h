#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H

#include <iostream>

const int maxMascotas = 3;

class Mascota;

class Tamagotchi
{
    private:
        Mascota* mascotas[maxMascotas];

    public:
        Tamagotchi();
        void menu();
        void agregarMascota();
        void mostrarMascotas();
};

#endif