#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entidad.h"

int main()
{
/*
    FILE *pArchivo;
    int id=100;
    char nombre[]= "Juan";
    char apellido[]= "Lopez";

    pArchivo = fopen("archivo.ext", "w");
    if(pArchivo != NULL)
    {
        fprintf(pArchivo, "%d,%s,%s\n", id,nombre,apellido);//imprimir archivo
        fclose(pArchivo);
    }
    else
    {
        printf("No se creo!");
    }


    FILE *pArchivo;
    char bufferId[1024];
    char bufferNombre[1024];
    char bufferApellido[1024];
    Entidad* pBuffer;



    pArchivo=fopen("archivo.ext","r");
    if(pArchivo!=NULL)
    {
        while(!feof(pArchivo))
        {
            strcpy(bufferApellido,"-----*-----");
            fscanf(pArchivo,"%[^,],%[^,],%[^\n]\n",bufferId,bufferNombre,bufferApellido);
            printf("%s  -  %s  -  %s\n",bufferId,bufferNombre,bufferApellido);
            entidad_newConParametros()
        }
        fclose(pArchivo);
    }
    else
    {
        printf("El archivo no existe");
    }

    pBuffer=entidad_new();
*/

void mostrar(Entidad *pEntidad[],int size);
void mostrar(Entidad *pEntidad[],int size)
{
    int i;
    int auxId;
    char auxNombre[60];

    for(i=0;i<size;i++)
    {
        entidad_getBufferId(pEntidad[i],&auxId);
        entidad_getBufferNombre(pEntidad[i],auxNombre);
        printf("\nID: %d  -  Nombre: %s",auxId,auxNombre);
    }
}

    Entidad *pEntidad[1024];
    Entidad *auxEntidad;
    int size=0;
    FILE* pArchivoEntidad;
    char bufferId[1024];
    char bufferNombre[1024];
    char bufferApellido[1024];
    char bufferIsEmpty[1024];
    int flagOnce=1;

    pEntidad=fopen("data.csv","r");
    while(!feof(pEntidad))
    {
        if(flagOnce)
        {
            fscanf(pEntidad,"%s",bufferId);
            flagOnce=0;
        }
        fscanf(pEntidad,"%s",bufferId,
                             bufferNombre,
                             bufferApellido,
                             bufferIsEmpty);

        pEntidad[size]=entidad_newConParametros(bufferId,
                                                bufferNombre,
                                                bufferApellido);

        if(auxEntidad != NULL)
        {
            pEntidad[size]=auxEntidad;
        }
    }
    fclose(pEntidad);


    return 0;
}
