#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED
/*
utn_getEntero : pide un entero al usuario
@param pEdad: puntero a edad
@param reintentos: cantidad de reintentos
@return : 0 ok, -1 error.
*/
int utn_getEntero(int*pEdad,int reintentos,char*msg,char*msgErr,int max,int min);

#endif // UTN_H_INCLUDED
