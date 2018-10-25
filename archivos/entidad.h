#ifndef ENTIDAD_H_INCLUDED
#define ENTIDAD_H_INCLUDED
typedef struct
{
    int bufferId;
    char bufferNombre[1024];
    char bufferApellido[1024];
}Entidad;


Entidad* entidad_new();
void entidad_delete();
Entidad* entidad_newConParametros(char* bufferId,char* bufferNombre,char* bufferApellido);

int entidad_setBufferId(Entidad* this,int bufferId);
int entidad_getBufferId(Entidad* this,int* bufferId);

int entidad_setBufferNombre(Entidad* this,char* bufferNombre);
int entidad_getBufferNombre(Entidad* this,char* bufferNombre);

int entidad_setBufferApellido(Entidad* this,char* bufferApellido);
int entidad_getBufferApellido(Entidad* this,char* bufferApellido);

#endif // ENTIDAD_H_INCLUDED
