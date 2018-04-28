
#include "Serie.h"
#include <string.h>
#include <stdio.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void mostrarListaSeries(eSerie listado[], int l)
{
    int i;
    printf("\nSeries: \n");
    for(i=0;i<l;i++)
    {
        if(listado[i].estado==1)
        {
            printf("%d %s %s %d\n",listado[i].idSerie,listado[i].nombre,listado[i].genero,listado[i].cantidadTemporadas);

        }
    }
}

/*void mostrarSerieConSuUsuario(eSerie serie[], int l,eUsuario usuario[], int r)
{
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(serie[i].idSerie==usuario[j].idSerie&&serie[i].estado==1)
            {
                printf("%s %s %s",serie[i].nombre,serie[i].genero,usuario[j].nombre);
            }
        }
    }
}*/




