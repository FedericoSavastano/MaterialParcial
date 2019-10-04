#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"
#include "func.h"

#define TRUE 0
#define FALSE 1
#define ELEMENTS 3


/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(sEmployee* list, int len)
{
    int retorno;

    if(list!=NULL && len==ELEMENTS)
    {
        int i;
        for(i=0;i<len;i++)
        {
            list[i].isEmpty=TRUE;
            retorno=0;
        }

    }else{
        retorno= -1;
    }
    return retorno;
}




/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
 *
 */
int addEmployee(sEmployee* list, int len, int id, char name[],char
lastName[],float salary,int sector)
{
    int retorno;
    int lastplace= '\0';

    if(list!=NULL && len==ELEMENTS)
    {

        strcpy(list.name,name);

        strcpy(list.lastName,lastName);

        list.id=id;

        list[i].isEmpty=1;

        list[i].salary=salary;

        list[i].sector=sector;
    }

    return -1;
}




int findEmptyPlace (sEmployee* list, int len)
{
    int i;
    int emptyPlaceValid=0;
    int indexFound;
    for(i=0;i<len;i++)
    {
        if(list[i].isEmpty==0)
        {
            indexFound=i;
            emptyPlaceValid=1;
            break;
        }else if(list[i].isEmpty== '\0' && emptyPlaceValid==0)
        {
            indexFound=-1;
        }

    }

    return indexFound;
}
