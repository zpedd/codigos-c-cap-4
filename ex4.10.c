#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array[5];
    int array2[5];
    int valorlimite;
    int contador = 0;
    int houvecopia = 0;

    for(int i = 0; i < 5; i ++){
        printf("array[%d]: ", i );
        scanf("%d", &array[i]);
    }
    printf("Copiar maiores que: ");
    scanf("%d", &valorlimite);

    //copiar os valores 
    for(int i = 0; i < 5; i++){
        if(array[i] > valorlimite){
            array2[contador] = array[i];
            contador++;
            houvecopia = 1;
        }
    }
    if(!houvecopia){
        printf("Nao houve copia!");
    }else{
        for(int i = 0; i < contador; i++){
            printf("arrayCopia[%d] = %d\n", i, array2[i]);
        }
    } 
    printf("\n");

    return 0;
}