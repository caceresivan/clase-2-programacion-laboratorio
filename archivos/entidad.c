
#include "entidad.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Entidad* entidad_new()
{
    Entidad* this;
    this=malloc(sizeof(Entidad));
    return this;
}

void entidad_delete(Entidad* this)
{
    free(this);
}

Entidad* entidad_newConParametros(char* bufferId,char* bufferNombre,char* bufferApellido)
{
    Entidad* this;
    this=entidad_new();

    //falta validar

    if(
    !entidad_setBufferId(this,atoi(bufferId))&&
    !entidad_setBufferNombre(this,bufferNombre)&&
    !entidad_setBufferApellido(this,bufferApellido))
        return this;

    entidad_delete(this);
    return NULL;
}

int entidad_setBufferId(Entidad* this,int bufferId)
{
    int retorno=-1;
    //falta validar (crear o buscar funcion isValid)
    if(this!=NULL && isValidId(bufferId))
    {
        this->bufferId=bufferId;
        retorno=0;
    }
    return retorno;
}

int entidad_getBufferId(Entidad* this,int* bufferId)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *bufferId=this->bufferId;
        retorno=0;
    }
    return retorno;
}

int entidad_setBufferNombre(Entidad* this,char* bufferNombre)
{
    int retorno=-1;
    if(this!=NULL && bufferNombre!=NULL)
    {
        strcpy(this->bufferNombre,bufferNombre);
        retorno=0;
    }
    return retorno;
}

int entidad_getBufferNombre(Entidad* this,char* bufferNombre)
{
    int retorno=-1;
    if(this!=NULL && bufferNombre!=NULL)
    {
        strcpy(bufferNombre,this->bufferNombre);
        retorno=0;
    }
    return retorno;
}

int entidad_setBufferApellido(Entidad* this,char* bufferApellido)
{
    int retorno=-1;
    if(this!=NULL && bufferApellido!=NULL)
    {
        strcpy(this->bufferApellido,bufferApellido);
        retorno=0;
    }
    return retorno;
}

int entidad_getBufferApellido(Entidad* this,char* bufferApellido)
{
    int retorno=-1;
    if(this!=NULL && bufferApellido!=NULL)
    {
        strcpy(bufferApellido,this->bufferApellido);
        retorno=0;
    }
    return retorno;
}

