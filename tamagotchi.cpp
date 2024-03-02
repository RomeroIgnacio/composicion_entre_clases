#include <iostream>

using namespace std;

#include "tamagotchi.h"
#include "mascota.h"

Tamagotchi::Tamagotchi()
{
    for (int i = 0; i < 10; i++)
    {
        mascotas[i] = nullptr;
    }
}

void Tamagotchi::menu()
{
    int opcion;
    do
    {
        cout << "**Tamagotchi**" << endl << "1. Agregar mascota" << endl << "2. Mostrar mascotas" << endl << "3. Salir" << endl << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                agregarMascota();
                break;
            case 2:
                mostrarMascotas();
                break;
            case 3:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 3);
}

void Tamagotchi::agregarMascota()
{
    int i = 0;
    while (mascotas[i] != nullptr && i < 10)
    {
        i++;
    }

    if (i < 10) {
        string nombre;
        cout << "Ingrese el nombre de la mascota: ";
        cin >> nombre;

        mascotas[i] = new Mascota(nombre);
        cout << "Mascota " << nombre << " agregada correctamente." << endl;
    }
    else
    {
        cout << "No hay espacio disponible para agregar mas mascotas." << endl;
    }
}

void Tamagotchi::mostrarMascotas()
{
    for (int i = 0; i < 10; i++)
    {
        if (mascotas[i] != nullptr) {
            cout << "Mascota " << i + 1 << ": " << mascotas[i]->getNombre() << endl;
        }
    }
}
