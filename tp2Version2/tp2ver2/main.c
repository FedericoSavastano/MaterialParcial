#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"
#include "func.h"

#define TRUE 0
#define FALSE 1
#define ELEMENTS 3


int main()
{
    int idNumberAcumulator;
    sEmployee employeesList[ELEMENTS];

    /** aca en el main uso el 0 o 1 del inicializar para validar el comenzar a cargar y todo lo demas */

    int numero;

    numero=initEmployees(employeesList,ELEMENTS);
    int i;
    for(i=0;i<ELEMENTS;i++)
    {
        printf(" los is empty dicen : %d \n",employeesList[i].isEmpty);
    }


    return 0;
}
