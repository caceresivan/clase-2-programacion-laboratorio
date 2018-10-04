#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Contratacion.h"
#include "utn.h"
#include "pantalla.h"

typedef struct
{
    char cuit[50];
    float importe;
    int cantidadCont;
    int isEmpty;
} InfoCliente;


int informar_ConsultaFacturacion(Contratacion* arrayC,int limite,
              Pantalla* pantallas, int lenPantallas, char* cuit)
{
    int retorno = -1;

    return retorno;
}



int informar_ListarContrataciones(Contratacion* arrayC,int limite,
              Pantalla* pantallas, int lenPantallas)
{
    int retorno = -1;

    return retorno;
}


int informar_ListarCantidadContratacionesImporte(Contratacion* arrayC,int limite,
              Pantalla* pantallas, int lenPantallas)
{
    int retorno = -1;

    return retorno;
}

int informar_ListarPantallas(Pantalla* array,int limite)
{
    int retorno=-1;
    if(array != NULL && limite>0)
    {
        pantalla_ordenar(array,limite,0);
        pantalla_mostrarDebug(array,limite);
    }



    return retorno;
}

int pantalla_ordenarPrecioNombre(Pantalla* array,int limite)
{
    int flagSwap;
    int retorno=-1;
    int i;
    Pantalla aux;
    if(array != NULL && limite>0)
    {
        do
        {
            flagSwap=0;
            for(i=0;i<limite-1;i++)
            {
                if(array[i].precio > array[i+1].precio ||
                    (array[i].precio == array[i+1].precio && strcmp(array[i].nombre,array[i+1].nombre)<0))
                {
                    flagSwap=1;
                    aux=array[i];
                    array[i]=array[i+1];
                    array[i+1]=aux;
                    flagSwap=1;
                }
            }
        }while(flagSwap);
    }



    return retorno;
}

InfoCliente arrayIC[1000];
static int initInfoCliente(Contratacion* arrayCont,int limiteCont,
                           InfoCliente arrayInfoC,int limiteInfoC)
{
    int i;
    int proximoLibre=0;
    for(i=0;i<limiteInfoC;i++)
    {
        arrayInfoC[i].isEmpty=1;
    }
    for(i=0;i<limiteCont;i++)
    {
       if(!estaCuitEnInfoCliente(arrayInfoC,limiteInfoC,arrayCont[i].cuit))
       {
            strcpy(arrayInfoC[proximoLibre].cuit,)
            proximoLibre++;
       }
    }
}

static int estaCuitEnInfoCliente(InfoCliente arrayInfoC,int limiteInfoC)
{
    int i;
    int retorno=0;
    for(i=0;i<limiteInfoC;i++)
    {

    }
}

static int cargaInfoCliente(Contratacion* arrayCont,int limiteCont,
                           InfoCliente arrayInfoC,int limiteInfoC
                           Pantalla* pantallas,int lenPantallas)
{
    int i,j;
    int qtyContrataciones=0;
    Pantalla* auxPantalla;
    for(i=0;i<limiteInfoC;i++)
    {
        if(!arrayInfoC[i].isEmpty)
        {
            qtyContrataciones=0;
            arrayInfoC[i].importe=0;
            for(j=0;j<limiteCont;j++)
            if(!strcmp(arrayInfoC[i].cuit == arrayCont[j].cuit))
            {
                qtyContrataciones++;
                auxPantalla=getPantallaById(pantallas,lenPantallas,arrayCont[j].idPantalla);
                arrayInfoC[i].importe = auxPantalla->precio * arrayCont[j].dias;
            }
        }
        arrayInfoC[i].cantidadCont=qtyContrataciones;
    }

}


/*void ordenarPorPrecio(Pantalla* pPantalla,int limite)
{
    int i,aux;
    int flagNoOrdenado=1;

    while(flagNoOrdenado==1)
    {
        flagNoOrdenado=0;
        for(i=1;i<limite;i++)
        {
            if(pPantalla[i].precio<pPantalla[i-1].precio)
            {
                aux=pPantalla[i].precio;
                pPantalla[i].precio=pPantalla[i-1].precio;
                pPantalla[i-1].precio=aux;
                flagNoOrdenado=1;
            }
        }
    }
}
void ordenarPorNombre(Pantalla* pPantalla,int limite)
{
    int i;
    char auxi[60];
    int flagNoOrden=1;

    while(flagNoOrden==1)
    {
        flagNoOrden=0;
        for(i=1;i<limite;i++)
        {
            if(pPantalla[i].nombre>pPantalla[i+1].nombre)
            {
                strcpy(auxi,pPantalla[i].nombre);
                strcpy(pPantalla[i].nombre,pPantalla[i+1].nombre);
                strcpy(pPantalla[i+1].nombre,auxi);
                flagNoOrden=1;
            }
        }
    }
}

void ordenarPrecioYNombre(Pantalla* pPantalla,int limite)
{
    int i;

}*/
