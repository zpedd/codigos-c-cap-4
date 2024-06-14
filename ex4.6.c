#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[5];
    int valorBusca;
    int encontrados[5]; // Array para armazenar os índices onde o valor foi encontrado
    int qtdEncontrados = 0; // Contador para o número de índices onde o valor foi encontrado

    // Preenchendo o array com valores fornecidos pelo usuário
    printf("Digite os valores para preencher o array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &valorBusca);

    // Procurando o valor no array e armazenando os índices onde foi encontrado
    for (int i = 0; i < 5; i++) {
        if (array[i] == valorBusca) {
            encontrados[qtdEncontrados] = i;
            qtdEncontrados++;
        }
    }

    //onde o valor foi encontrado
    
    if (qtdEncontrados > 1) {
        printf("O valor %d foi encontrado nos indices ", valorBusca);
    }else if(qtdEncontrados == 1){
        printf("O valor %d foi encontrado no indice ", valorBusca);
    }
        for (int i = 0; i < qtdEncontrados; i++) {
            printf("%d", encontrados[i]);
            if (i < qtdEncontrados - 2) {
                printf(", ");
            } else if (i == qtdEncontrados - 2) {
                printf(" e ");
                }
            }
        printf(" do array.\n");

    if(!qtdEncontrados){
        printf("O array nao contem o valor %d.", valorBusca);
    } 
    return 0;
}