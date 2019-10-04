#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "estructuras.h"
#define CANT_EMPLEADOS 3

int main()
{
    int numeroID=0;
    eEmployee listaEmpleados[CANT_EMPLEADOS];
    int opcion;
    int indiceLibre;




    mostrarMenu();
    opcion=getInt("Ingrese una opcion : ");

    while(opcion!=5)
    {
        switch(opcion)
        {
        case 1:
            indiceLibre=buscarLugarLibre(listaEmpleados,CANT_EMPLEADOS);
            listaEmpleados[indiceLibre]=agregarEmpleado();
            listaEmpleados[indiceLibre].id=incrementarID(&numeroID);

            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            mostrarEmpleados(listaEmpleados,CANT_EMPLEADOS);
            break;
        }

         mostrarMenu();
        opcion=getInt("Ingrese una opcion : ");

    }



    return 0;
}
