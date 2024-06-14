#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array[5];
    int buscarpor;

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("Buscar por: ");
    scanf("%d", &buscarpor);

    for(int i = 0; i < 5; i++){
        if (buscarpor == array[i]){
            printf("Indice %d: ACHEI\n", i);
        }else{
            printf("Indice %d: NAO ACHEI\n", i);
        }
    }
    return 0;
}