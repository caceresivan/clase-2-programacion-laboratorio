#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int i;
    int numeroMaximo;
    int numeroMinimo;
    int acumulador=0;
    float promedio;

    for(i=0;i<10;i++)
    {
        printf("Ingrese un numero:");
        scanf("%d",&numero);

        if(i==0)
        {
            numeroMaximo=numero;
            numeroMinimo=numero;
        }
        if(numero>numeroMaximo)
        {
            numeroMaximo=numero;
        }
        if(numero<numeroMinimo)           [--git-dir=<path>] [--work-tree=<path>] [--namespace=<name>]
           <command> [<args>]

These are common Git commands used in various situations:

start a working area (see also: git help tutorial)
   clone      Clone a repository into a new directory
   init       Create an empty Git repository or reinitialize an existing one

work on the current change (see also: git help everyday)
   add        Add file contents to the index
   mv         Move or rename a file, a directory, or a symlink
   reset      Reset current HEAD to the specified state
   rm         Remove files from the working tree and from the index

examine the history and state (see also: git help revisions)
   bisect     Use binary search to find the commit that introduced a b
        {
            numeroMinimo=numero;
        }
        acumulador=acumulador+numero;
    }
    promedio=(float)acumulador/i;
    printf("El numero maximo es: %d\n",numeroMaximo);
    printf("El numero minimo es: %d\n",numeroMinimo);
    printf("El promedio es: %.1f",promedio);
    return 0;
}
