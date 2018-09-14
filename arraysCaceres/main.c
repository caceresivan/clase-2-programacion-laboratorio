#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define CANTIDAD_EMPLEADOS 5
#define DATO_INVALIDO -1

int mostrarArray(int* pArray,int limite);

//typedef int Persona;

/*struct S_Persona
{
    char nombre[70];
    int edad;
    char dni[20];
    float altura;
}
typedef struct S_Persona Persona;
*/
void altaPersona(Persona* pP)
{

}

int main()
{

    Persona p;
    p.edad= 33;
    p.altura= 1.90;

    fgets(p.nombre,70,stdin);
    //strncpy(p.nombre,"juan",70);


    PrintPersona(&p);


    return 0;

  /*  int edades[CANTIDAD_EMPLEADOS];
    int i;
    for(i=0; i<CANTIDAD_EMPLEADOS; i++)
    {
        if(utn_getEntero(&edades[i],2,"Edad?\n","Edad fuera de rango\n",200,0)==-1)
        {
            edades[i]=-1;

        }

    }
    printf("\n");

    mostrarArray(edades,CANTIDAD_EMPLEADOS);
    return 0;*/

    /*int edades[4];
    int i;
    int edadIngresada;
    for(i=0;i<edades[i];i++)
    {
       if()
       {

       }
        printf("Ingrese una edad.");

    }
    printf("%d",edades[i]);
    return 0;*/
}
/*int calcularMaximo(int* pArray,int limite,int* maximo)
{
    int i;
    int numMaximo;
    int retorno=-1;
    for(i=0;i<limite;i++)
    {
        if(pArray>numMaximo)
        {
            numMaximo= *pArray+i;
            retorno=0;
        }
    }
    return retorno;
}*/

