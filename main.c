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
        printf("Ingrese un numero sdsdsdsd:");
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
        if(numero<numeroMinimo)
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
