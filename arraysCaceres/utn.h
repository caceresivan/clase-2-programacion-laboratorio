#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED
/*
utn_getEntero : pide un entero al usuario
@param pEdad: puntero a edad
@param reintentos: cantidad de reintentos
@return : 0 ok, -1 error.
*/
int utn_getEntero(int*pEdad,int reintentos,char*msg,char*msgErr,int max,int min);
int mostrarArray(int* pArray,int limite);
int ordenarArray(int* pArray,int limite,int flagMayorMenor);
void insertion(int data[],int len);
typedef struct
{
    char nombre[70];
    int edad;
    char dni[20];
    float altura;
}Persona;
void PrintPersona(Persona* p);
#endif // UTN_H_INCLUDED
