#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "estructuras.h"

int main()
{
    ePropietario listaDePropietarios[4];
    eVehiculo listaDeVehiculos[7];
    int ordenar;
    int ordenar2;


    hardcodeoPropietarios(listaDePropietarios,4);
    hardcodeoVehiculos(listaDeVehiculos,7);

    mostrarListadoPersonas(listaDePropietarios,4);
    mostrarListadoVehiculos(listaDeVehiculos,7);

    //mostrarUnPropietario(listaDePropietarios[0]);
    //mostrarUnVehiculo(listaDeVehiculos[0]);
    printf("\n****AUTO CON DUENIO ****\n");
    ordenar=mostrarAutoConDuenio(listaDeVehiculos,7,listaDePropietarios,4);

    printf("\n*** DUENIO CON AUTO **** \n");
    ordenar2=mostrarDuenioConAuto(listaDeVehiculos,7,listaDePropietarios,4);

    return 0;
}
