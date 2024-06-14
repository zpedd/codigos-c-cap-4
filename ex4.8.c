#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[5];
    int temPar = 0; 
    int temImpar = 0; 

    
    printf("Digite os valores para preencher o array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0) {
            temPar = 1; 
        } else {
            temImpar = 1; 
        }
    }

    printf("Numeros pares:");
    int contadorPar = 0;
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf(" %d", array[i]);
            contadorPar++;
        }
    }
    if (contadorPar == 0) {
        printf(" nao ha");
    }
    printf(".\n");

    printf("Numeros impares:");
    int contadorImpar = 0;
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 != 0) {
            printf(" %d", array[i]);
            contadorImpar++;
        }
    }
    if (contadorImpar == 0) {
        printf(" nao ha");
    }
    printf(".\n");

    return 0;
}