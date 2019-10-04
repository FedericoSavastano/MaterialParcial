
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
#include "funciones.h"


void inicializarPropietarios (ePropietario listaPropietarios[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        listaPropietarios[i].idPropietario=0;
    }
}

void mostrarMenu ()
{
    printf("*** ESTACIONAMIENTO TE CHOCO TU COCHE S.A. ***\n\n");

    printf(" Elija una opcion \n 1. Cargar propietario \n 2. Mostrar propietarios \n 8. Salir\n\n\n ");

}


ePropietario cargarPropietario()
{
    ePropietario unPropietario;
    int validacionNombre;
    char auxNombre[51];
    int auxDia;
    int validDia;
    int auxMes;
    int validMes;
    int auxAnio;
    int validAnio;
    int auxID;

    validacionNombre=getValidString("Ingrese el nombre","nombre no valido","te pasaste de capacidad",auxNombre,51,3);

    if(validacionNombre==0)
      strcpy(unPropietario.nombre,auxNombre);

    validDia=getValidInt("Ingrese el dia de nacimiento : ","numero no valido", &auxDia,1,31,3);
    if(validDia==0)
        unPropietario.fechaNacimiento.dia=auxDia;

    validMes=getValidInt("Ingrese el mes de nacimiento : ","numero no valido \n", &auxMes,1,12,3);
    if(validMes==0)
        unPropietario.fechaNacimiento.mes=auxMes;

    validAnio=getValidInt("Ingrese el anio de nacimiento : ","numero no valido \n", &auxAnio,1900,2018,3);
    if(validAnio==0)
        unPropietario.fechaNacimiento.anio=auxAnio;






    return unPropietario;
}



void mostrarPropietarios(ePropietario listapropietarios[], int cantidad)
{
    int i;

    printf(" ID \t Nombre \t Fecha de nacimiento \n\n");

    for(i=0;i<cantidad;i++)
    {
        printf(" %d \t %s \t %d / %d /%d \t \n", listapropietarios[i].idPropietario, listapropietarios[i].nombre, listapropietarios[i].fechaNacimiento.dia,listapropietarios[i].fechaNacimiento.mes,listapropietarios[i].fechaNacimiento.anio);
    }


}




int buscarLugarLibre(ePropietario listapropietarios[], int cantidad)
{
    int i;
    int indiceLibre;
    for(i=0;i<cantidad;i++)
    {
        if(listapropietarios[i].idPropietario==0)
        {
            indiceLibre=i;
        }
    }

    return indiceLibre;
}
