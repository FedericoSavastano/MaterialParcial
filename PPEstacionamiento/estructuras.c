#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "estructuras.h"



void hardcodeoPropietarios(ePropietario listaPropietarios[], int cantidad)
{
    int idPropietariosHC[] = {10,20,30,40};
    char nombresHC [][51] = {"Leonardo","Donatello","Miguel Angel", "Rafael"};
    int diaHC[] = {5,8,12,20};
    int mesHC[] = {8,4,10,2};
    int anioHC[] = {1994,1995,1990,1993};
    int i;

    for (i=0;i<cantidad;i++)
    {
        listaPropietarios[i].idPropietario=idPropietariosHC[i];
        strcpy( listaPropietarios[i].nombre,nombresHC[i] );
        listaPropietarios[i].fechaNacimiento.dia=diaHC[i];
        listaPropietarios[i].fechaNacimiento.mes=mesHC[i];
        listaPropietarios[i].fechaNacimiento.anio=anioHC[i];
    }
}

void hardcodeoVehiculos(eVehiculo listaVehiculos[], int cantidad)
{
    char patenteHC [] [8] = {"LEO 133","DON 128", "MIK 069","RAF 999","SPL 011","KRA 333","SHR 111"};

    int diaHC[] = {5,8,12,20,10,8,9};
    int mesHC[] = {8,4,10,2,3,8,4};
    int anioHC[] = {2019,2019,2019,2019,2019,2019,2019};

    int horaEntradaHC[] = {18,20,10,05,06,15,17};
    int horaSalidaHC[] = {02, 23, 15, 9, 8, 21, 20};
    int idDuenioHC[] = {10,10,10,40, 88, 95, 31};

    int i;

    for (i=0;i<cantidad;i++)
    {
        strcpy(listaVehiculos[i].patente   , patenteHC[i]  );
        listaVehiculos[i].fechaIngreso.dia=diaHC[i];
        listaVehiculos[i].fechaIngreso.mes=mesHC[i];
        listaVehiculos[i].fechaIngreso.anio=anioHC[i];

        listaVehiculos[i].horaEntrada=horaEntradaHC[i];
        listaVehiculos[i].horaSalida=horaSalidaHC[i];
        listaVehiculos[i].idDuenio=idDuenioHC[i];
    }
}



void mostrarListadoPersonas(ePropietario listaPropietarios[], int cantidad)
{
    int i;
    printf("\t IDpropietario \t   Nombre \t Fecha de Nacimiento\t");
    printf("\n");
    printf("\n");

    for (i=0;i<cantidad;i++)
    {
        printf("\n");
        printf("\t%10d\t%15s\t%5d / %02d / %02d\t", listaPropietarios[i].idPropietario,listaPropietarios[i].nombre,listaPropietarios[i].fechaNacimiento.dia,
               listaPropietarios[i].fechaNacimiento.mes,listaPropietarios[i].fechaNacimiento.anio);
        printf("\n");
    }
}


void mostrarUnPropietario (ePropietario unPropietario)
{
    /*
    //printf("\t IDpropietario \t   Nombre \t Fecha de Nacimiento\t");
    //printf("\n");
    //printf("\n");

    printf("\t%10d\t%15s\t%5d / %02d / %02d\t", unPropietario.idPropietario,unPropietario.nombre,unPropietario.fechaNacimiento.dia,
               unPropietario.fechaNacimiento.mes,unPropietario.fechaNacimiento.anio);
    */
    printf("\n");
    printf("Id: %d \n",unPropietario.idPropietario);
    printf("Nombre: %s \n",unPropietario.nombre);
    printf("Fecha de nacimiento : %d / %d / %d \n",unPropietario.fechaNacimiento.dia,unPropietario.fechaNacimiento.mes, unPropietario.fechaNacimiento.anio);
    printf("\n");
}





void mostrarListadoVehiculos(eVehiculo listaVehiculos[], int cantidad)
{
    int i;
    printf("\t Patente \t Fecha de Ingreso \t Hora Entrada \t Hora Salida \t ID Duenio \t");
    printf("\n");
    printf("\n");


    for (i=0;i<cantidad;i++)
    {
        printf("\n");
        printf("\t %9s \t %5d / %2d /%2d \t %9d \t %9d \t %9d \t", listaVehiculos[i].patente, listaVehiculos[i].fechaIngreso.dia, listaVehiculos[i].fechaIngreso.mes,
               listaVehiculos[i].fechaIngreso.anio, listaVehiculos[i].horaEntrada, listaVehiculos[i].horaSalida, listaVehiculos[i].idDuenio);
        printf("\n");
    }
}

void mostrarUnVehiculo(eVehiculo unVehiculo)
{
    /*
    printf("\t Patente \t Fecha de Ingreso \t Hora Entrada \t Hora Salida \t ID Duenio \t");
    printf("\n");
    printf("\n");
    printf("\t %9s \t %5d / %2d /%2d \t %9d \t %9d \t %9d \t", unVehiculo.patente, unVehiculo.fechaIngreso.dia, unVehiculo.fechaIngreso.mes,
               unVehiculo.fechaIngreso.anio, unVehiculo.horaEntrada, unVehiculo.horaSalida, unVehiculo.idDuenio);
        printf("\n");

    */
    printf("\n");
    printf("Patente : %s , ", unVehiculo.patente);
    printf("ID duenio : %d , ", unVehiculo.idDuenio);
    printf("Fecha de ingreso %d / %d / %d , ",unVehiculo.fechaIngreso.dia,unVehiculo.fechaIngreso.mes, unVehiculo.fechaIngreso.anio);
    printf("Entrada : %d hs , ",unVehiculo.horaEntrada);
    printf("Salida : %d hs .",unVehiculo.horaSalida);
    printf("\n");
}


int ordenarPersonas (ePropietario listaPropietarios[], int cantidad)
{
    int i;
    int j;
    ePropietario auxPropietario;
    for (i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if( (strcmp(listaPropietarios[i].nombre,listaPropietarios[j].nombre)>0) )
            {
                auxPropietario=listaPropietarios[i];
                listaPropietarios[i]=listaPropietarios[j];
                listaPropietarios[j]=auxPropietario;


            }//if( (strcmp(listaPropietarios[i].nombre,listaPropietarios[j].nombre)>0) || listaPropietarios[i].fechaNacimiento.anio > listaPropietarios[j].fechaNacimiento.anio  )

            if (strcmp(listaPropietarios[i].nombre,listaPropietarios[j].nombre)==0)
            {
                if( listaPropietarios[i].fechaNacimiento.anio > listaPropietarios[j].fechaNacimiento.anio )
                {
                    auxPropietario=listaPropietarios[i];
                    listaPropietarios[i]=listaPropietarios[j];
                    listaPropietarios[j]=auxPropietario;
                }//if( listaPropietarios[i].fechaNacimiento.anio > listaPropietarios[j].fechaNacimiento.anio )
            }//if (strcmp(listaPropietarios[i].nombre,listaPropietarios[j].nombre)==0)





        }//for(j=i+1;j<cantidad;j++)
    }//for (i=0;i<cantidad-1;i++)


    return 0;
}


int ordenarVehiculos (eVehiculo listaVehiculos[], int cantidad)
{
    int i;
    int j;
    eVehiculo auxVehiculo;
    for (i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if( listaVehiculos[i].idDuenio > listaVehiculos[j].idDuenio)
            {
                auxVehiculo=listaVehiculos[i];
                listaVehiculos[i]=listaVehiculos[j];
                listaVehiculos[j]=auxVehiculo;
            }//if( listaVehiculos[i].idDuenio > listaVehiculos[j].idDuenio)

            if (listaVehiculos[i].idDuenio == listaVehiculos[j].idDuenio)
            {
                if( listaVehiculos[i].patente > listaVehiculos[j].patente )
                {
                    auxVehiculo=listaVehiculos[i];
                    listaVehiculos[i]=listaVehiculos[j];
                    listaVehiculos[j]=auxVehiculo;
                }//if( listaVehiculos[i].patente > listaVehiculos[j].patente )
            }//if (listaVehiculos[i].idDuenio == listaVehiculos[j].idDuenio)




        }//for(j=i+1;j<cantidad;j++)
    }//for (i=0;i<cantidad-1;i++)


    return 0;
}



int mostrarAutoConDuenio (eVehiculo listaVehiculos[], int cantidadVehiculos, ePropietario listaPropietarios[], int cantidadPropietarios)
{
    int i;
    int j;
    printf("-----------------------------------");
    printf("\n");
    for(i=0;i<cantidadVehiculos;i++)
    {
        printf("\n");
        printf("Vehiculo:");
        mostrarUnVehiculo(listaVehiculos[i]);
        for(j=0;j<cantidadPropietarios;j++)
        {
            if(listaVehiculos[i].idDuenio == listaPropietarios[j].idPropietario)
            {
                printf("Propietario:");
                mostrarUnPropietario(listaPropietarios[j]);
            }
        }

        printf("-------------------------------------------");
        printf("\n\n");
    }


    return 0;
}


int mostrarDuenioConAuto (eVehiculo listaVehiculos[], int cantidadVehiculos, ePropietario listaPropietarios[], int cantidadPropietarios)
{
    int i;
    int j;
    printf("-----------------------------------");
    printf("\n");
    for(i=0;i<cantidadPropietarios;i++)
    {
        printf("\n");
        printf("Propietario:");
        mostrarUnPropietario(listaPropietarios[i]);

        for(j=0;j<cantidadVehiculos;j++)
        {
            if(listaVehiculos[j].idDuenio == listaPropietarios[i].idPropietario)
            {
                printf("Vehiculo:");
                mostrarUnVehiculo(listaVehiculos[j]);
            }
        }
        printf("-----------------------------------");
        printf("\n");
    }


    return 0;
}




//int mostrarUnAutoConDuenio
