#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char respuesta;

    do {
        printf("Ingrese numero entero:\n");
        setbuf(stdin, NULL);
        scanf("%d", &numero);
    } while(respuesta == 's');

    return 0;
}
