#include <stdio.h>
#include <stdlib.h>


//array dinamico de enteros mostrarlo por printf.

int initArray(int *arrayInt,int limite,int valor);
int showArray(int*arrayInt,int limite);
int* new_array(int size);
int delete_array(int *arrayInt);
int reSizeArray(int*arrayInt,int size);

int main()
{
    int* arrayEnteros;
    arrayEnteros=new_array(100);
    initArray(arrayEnteros,100,1024);
    showArray(arrayEnteros,100);
    delete_array(arrayEnteros);


    printf("Hello world!\n");
    return 0;
}

int* new_array(int size)
{
    int* retorno=NULL;
    int* auxInt;
    if(size>0)
    {
    auxInt=(int*) malloc(sizeof(int)*size);
    if(auxInt!=NULL)
    {
        retorno=auxInt;
    }
    }
    return retorno;
}

int initArray(int *arrayInt,int limite,int valor)
{
    int retorno=-1;
    int i;
    if(arrayInt!=NULL && limite>0)
    {
        for(i=0;i<limite;i++)
        {
            *(arrayInt+i)=valor;
        }
        retorno =0;
    }
    return retorno;
}

int showArray(int*arrayInt,int limite)
{
    int retorno=-1;
    int i;
    if(arrayInt!=NULL && limite>0)
    {
        for(i=0;i<limite;i++)
        {
            printf("%p - [%d] - %d\n",(arrayInt+i),i,*(arrayInt+i));
        }
        retorno =0;
    }
    return retorno;
}

int delete_array(int *arrayInt)
{
    int retorno=-1;
    if(arrayInt!=NULL)
    {
        free(arrayInt);
        retorno =0;
    }
    return retorno;
}

int reSizeArray(int*arrayInt,int size)
{
    int* retorno=NULL;
    if(arrayInt!=NULL && size>0)
    {
        retorno = (int*)realloc(arrayInt,sizeof(int)*size);
    }
    return retorno;
}
