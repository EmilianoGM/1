#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char respuesta = 's';
    float promedioPositivos;
    float promedioNegativos;
    int diferencia;
    int max;
    int min;

    int contInicial = 0;
    int contPositivos = 0;
    int contNegativos = 0;
    int contCeros = 0;
    int contPares = 0;
    int sumaPositivos = 0;
    int sumaNegativos = 0;


    while(respuesta == 's'){
        printf("Ingrese numero entero:\n");
        setbuf(stdin, NULL);
        scanf("%d", &numero);

        if(numero % 2 == 0){
            contPares++;
        }

        if(numero == 0){
            contCeros++;
        } else {
            if(numero > 0){
                contPositivos++;
                sumaPositivos += numero;
            } else {
                contNegativos++;
                sumaNegativos += numero;
            }
        }

        if(contInicial == 0){
            contInicial++;
            max = numero;
            min = numero;
        } else {
            if(max < numero){
                max = numero;
            }
            if(min > numero){
                min = numero;
            }
        }

        printf("Continuar? (s = si / n = no):\n");
        setbuf(stdin, NULL);
        scanf("%c", &respuesta);
    }

    promedioPositivos = (float)sumaPositivos / contPositivos;
    promedioNegativos = (float)sumaNegativos / contNegativos;
    diferencia = contPositivos - contNegativos;

    printf("\n");

    printf("Suma de los negativos: %d\n", sumaNegativos);
    printf("Suma de los positivos: %d\n", sumaPositivos);
    printf("Cantidad de positivos: %d\n", contPositivos);
    printf("Cantidad de negativos: %d\n", contNegativos);
    printf("Cantidad de ceros: %d\n", contCeros);
    printf("Cantidad de pares: %d\n", contPares);
    printf("Promedio de positivos: %.2f\n", promedioPositivos);
    printf("Promedio de negativos: %.2f\n", promedioNegativos);
    printf("Diferencia: %d\n", diferencia);
    printf("Maximo: %d\n", max);
    printf("Minimo: %d\n", min);

    return 0;
}
