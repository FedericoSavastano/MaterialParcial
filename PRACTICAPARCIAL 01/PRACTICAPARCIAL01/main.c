#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "funciones.h"
#include "estructuras.h"
#define CANT_PROPIETARIOS 3

int main()
{
    int numeroID=0;
    ePropietario listaPropietarios[CANT_PROPIETARIOS];
    int opcion;

    inicializarPropietarios(listaPropietarios,CANT_PROPIETARIOS);

    mostrarMenu();
    opcion=getInt("Ingrese su opcion :");
    while(opcion!=8)
    {

        switch(opcion)
        {
            case 1:
                listaPropietarios[1]=cargarPropietario();
                listaPropietarios[1].idPropietario=incrementarID(&numeroID);
                break;
            case 2:
                mostrarPropietarios(listaPropietarios,CANT_PROPIETARIOS);
                break;



        }

    mostrarMenu();
    opcion=getInt("Ingrese su opcion :");
    }


    int i;
    for(i=0;i<CANT_PROPIETARIOS;i++)
    {
        printf("%d\n",listaPropietarios[i].idPropietario);
    }




    return 0;
}
