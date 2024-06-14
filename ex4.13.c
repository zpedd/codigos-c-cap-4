#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array[10];
    int posicao;

    for(int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    do{
        printf("Posicao a ser removida (0 a 9): ");
        scanf("%d", &posicao);
        if(posicao < 0 || posicao > 9){
            printf("Posicao invalida, forneca novamente!\n");
        }
    }while (posicao < 0 || posicao > 9);

    for ( int i = posicao; i < 9; i++){
        array[i] = array[i+1];
    }
    printf("array depois: ");
    for ( int i = 0; i < 9; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");

    return 0;
}