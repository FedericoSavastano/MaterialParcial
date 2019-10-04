#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funciones.h"
#include "estructuras.h"


int inicializarEmpleados (eEmployee listaempleados[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        listaempleados[i].isEmpty=0; /**cero para TRUE*/
    }

    return 0;
}

eEmployee agregarEmpleado ()
{
    eEmployee unEmpleado;
    char auxNombre[51];
    int validacionNombre;
    char auxApellido[51];
    int validacionApellido;
    float auxSalario;
    int validacionSalario;
    int auxSector;
    int validacionSector;

    validacionNombre=getValidString("Ingrese el nombre : ","Nombre invalido","Nombre demasiado largo",auxNombre,51,3);
    if(validacionNombre==0)
      strcpy(unEmpleado.nombre,auxNombre);

    validacionApellido=getValidString("Ingrese el apellido : ","Apellido invalido","Apellido demasiado largo",auxApellido,51,3);
    if(validacionApellido==0)
      strcpy(unEmpleado.apellido,auxApellido);

    validacionSalario=getValidFloat("Ingrese el salario : ","Salario invalido",&auxSalario,10,1000,3);
    if(validacionSalario==0)
        unEmpleado.salario=auxSalario;

    validacionSector=getValidInt("Ingrese el sector : ","Sector erroneo ",&auxSector,1,10,3);
    if(validacionSector==0)
        unEmpleado.sector=auxSector;


    unEmpleado.isEmpty=1;

    return unEmpleado;

}



void mostrarMenu()
{
    printf("Elija una opcion : \n 1. dar de alta un empleado \n 2. Modificar un empleado \n 3. dar de baja un empleado \n 4. mostrar \n 5. salir \n\n");
}






int buscarLugarLibre(eEmployee listaempleados[], int cantidad)
{
    int i;
    int indiceLibre;
    for(i=0;i<cantidad;i++)
    {
        if(listaempleados[i].isEmpty==0)
        {
            indiceLibre=i;
            break;
        }
    }

    return indiceLibre;
}



void mostrarEmpleados(eEmployee listaempleados[], int cantidad)
{
    int i;
    printf(" Id \t apellido \t nombre \t salario \t sector  \n\n");
    for(i=0;i<cantidad;i++)
    {
        if(listaempleados[i].isEmpty==1)
        {
            printf(" %d \t %s \t %s \t %f \t %d \n", listaempleados[i].id, listaempleados[i].apellido, listaempleados[i].nombre, listaempleados[i].salario, listaempleados[i].sector);
        }
    }

}
