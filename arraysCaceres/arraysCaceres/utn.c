#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

static int getInt(int*pResultado);
int utn_getEntero(int*pEdad,int reintentos,char*msg,char*msgErr,int max,int min)
{
    int retorno = -1;
    int auxiliarEdad=0;


    for(;reintentos > 0;reintentos--)
    {
        printf(msg);
        if(getInt(&auxiliarEdad) == 0)
        {
            if(auxiliarEdad >= min && auxiliarEdad <= max)
            {
                *pEdad = auxiliarEdad;
                retorno = 0;
                break;
            }
            else
            {
                printf(msgErr);
            }
        }
        else
        {
            printf(msgErr);
            __fpurge(stdin);
        }
    }
    return retorno;
}
static int getInt(int*pResultado)
{
    int auxiliar;
    int retorno= -1;

    if(scanf("%d",&auxiliar)==1)
    {
        *pResultado=auxiliar;
        retorno=0;
    }
    return retorno;
}
int mostrarArray(int* pArray,int limite)
{
    int i;

    for(i=0;i<limite;i++)
    {
        printf("%d",pArray[i]);
    }
    return 0;
}
