#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

static int esNumero(char*cadena);
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
    /*int auxiliar;
    int retorno= -1;

    if(scanf("%d",&auxiliar)==1)
    {
        *pResultado=auxiliar;
        retorno=0;
    }
    return retorno;*/
    int aux;
    char cadena[64];
    scanf("%s",cadena);

    if(esNumero(cadena)==0)
    {
        aux = atoi(cadena);
        *pResultado=aux;
        return 0;
    }


    return -1;
}
static int esNumero(char* pCadena)
{
    int i=0;
    char aux;
    int retorno=0;

    aux= pCadena[i];
    while(aux!=0)
    {
        if(aux<48 || aux>57)
        {
            retorno=-1;
            break;
        }
        i++;
        aux= pCadena[i];
    }
    return retorno;
}

int mostrarArray(int* pArray,int limite)
{
    int i;

    for(i=0;i<limite;i++)
    {
        printf("%d\n",pArray[i]);
    }
    return 0;
}

int ordenarArray(int* pArray,int limite,int flagMayorMenor)
{
    int flagNoTermineOrdenar=1;
    int i;
    int aux;

        while(flagNoTermineOrdenar==1)
        {
            flagNoTermineOrdenar=0;
            for(i=0; i<(limite -1); i++)
            {
                if((flagNoTermineOrdenar==0 && (pArray[i]>pArray[i+1])
                    (flagNoTermineOrdenar==1 && (pArray[i]<pArray[i+1]))
                {
                    aux=pArray[i];
                    pArray[i]=pArray[i+1];
                    pArray[i+1]=aux;
                    flagNoTermineOrdenar=1;
                }
            }
            return 0;
        }
        return 0;
}

