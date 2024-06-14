#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array[5];
    int buscarpor;
    int contagem = 0;
    int encontrado = 0;

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &buscarpor);

    for(int i = 0; i < 5; i++){
        if( array[i] == buscarpor){
            contagem++;
            encontrado = 1;
        }
    }
    if(encontrado && contagem < 2 ){
        printf("O array contem %d ocorrencia do valor %d.", contagem, buscarpor);
    }else if(encontrado && contagem > 1){
        printf("O array contem %d ocorrencias do valor %d.", contagem, buscarpor);
    }else{
        printf("O array nao contem o valor %d.", buscarpor);
    }

    return 0;
}