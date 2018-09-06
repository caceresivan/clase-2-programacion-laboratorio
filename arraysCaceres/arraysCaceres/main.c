#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define CANTIDAD_EMPLEADOS 5
#define DATO_INVALIDO -1

int mostrarArray(int* pArray,int limite);

int main()
{
    int edades[CANTIDAD_EMPLEADOS];
    int i;
    for(i=0; i<CANTIDAD_EMPLEADOS; i++)
    {
        if(utn_getEntero(&edades[i],2,"Edad?\n","Edad fuera de rango\n",200,0)==-1)
        {
            edades[i]=-1;

        }
        mostrarArray(edades,CANTIDAD_EMPLEADOS);
    }

    return 0;
}
int calcularMaximo(int* pArray,int limite,int* maximo)
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
}
