#include "mascota.h"

Mascota::Mascota()
{
    nombre = "";
}

Mascota::Mascota(string nombre)
{
    this->nombre = nombre;
}

string Mascota::getNombre() const
{
    return nombre;
}