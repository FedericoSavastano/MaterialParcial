#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main()
{
    float numero;
    char string[12];
    /*
    printf("Dame un string :");
    fflush(stdin);
    gets(string);
    if(esSoloLetras(string))
        printf("ES solo letras ff");
    else
        printf("No es solo letras");

    */

    getString("Dame un string",string);
    printf("Tu string dice : %s",string);
    return 0;
}
