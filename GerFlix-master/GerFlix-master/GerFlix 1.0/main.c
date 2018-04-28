#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100



int main()
{
    int option;
    char resp='s';

    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    do{
    system("cls");
    printf("1. Mostrar el listado de series\n");
    printf("2. Mostrar el listado de usuarios\n");
    printf("3. Mostrar el listado de Usuarios con el nombre de la serie que ve.\n");
    printf("4. Mostrar por cada serie, el nombre de los usuarios que la ven.\n");
    printf("5. Salir.\n");
    scanf("%d",&option);

    switch(option){
        case 1:{
        mostrarListaSeries(listaDeSeries, TAMSERIE);
        getche();
        break;
        }
        case 2:{
        mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
        getche();
        break;
        }
        case 3:{
        mostrarUsuarioConSuSerie(listaDeUsuarios,TAMUSUARIO,listaDeSeries,TAMSERIE);
        getche();
        break;
        }
        case 4:{
        //mostrarSerieConSuUsuario(listaDeSeries,TAMSERIE,listaDeUsuarios,TAMUSUARIO);
        break;
        }
        case 5:{
        resp = 'n';
        break;
        }

    }


    }while(resp=='s');

    return 0;
}
