#include <stdio.h>
#include <stdlib.h>

int main (void){

    float array[5];
    float produtorio = 1;
    float somatorio = 0;

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%f", &array[i]);
    }
    for(int i = 0; i < 5; i++){
        produtorio = array[i] * produtorio;
        somatorio = array[i] + somatorio;
    }
    printf("Somatorio: %.2f\n", somatorio);
    printf("Produtorio: %.2f", produtorio);

    return 0;
}