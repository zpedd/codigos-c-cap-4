#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array[10];
    int quantidade;
    int novonumero;

    do{
        printf("Quantidade de elementos (1 a 9): ");
        scanf("%d", &quantidade);
        if (quantidade < 1 || quantidade > 9) {
            printf("Quantidade incorreta, forneca novamente!\n");
        }
    }while(quantidade < 1 || quantidade > 9);
        printf("Digite os %d elementos:\n", quantidade);
        for(int i = 0; i < quantidade; i++){
            do{
                printf("array[%d]: ", i);
                scanf("%d", &array[i]);
            }while (array[i] > 9999999999);
    }
    printf("Valor que sera inserido: ");
    scanf("%d", &novonumero);

    //deslocar os elementos para direita:
    for(int i = quantidade - 1; i >=0; i-- ){
        array[i+1]= array[i];
    }
    array[0] = novonumero;

    for(int i = 0 ; i<= quantidade; i ++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");

    return 0;
}