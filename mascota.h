#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>

using namespace std;

class Mascota
{
    private:
        string nombre;

    public:
        Mascota();
        Mascota(string nombre);
        string getNombre() const;
};

#endif