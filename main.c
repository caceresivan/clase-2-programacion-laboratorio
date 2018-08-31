#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

int main()
{
    int edad;
    if(utn_getEntero(&edad,4,"Ingrese edad.","Error ingrese una edad entre 0 y 199",199,0)==0)
    {
        printf("La edad es: %d",edad);
    }

    return 0;
}
