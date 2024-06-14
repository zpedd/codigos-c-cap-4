#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array1[5];
    int array2[5];
    int arrayintersecao[5];
    int tamanhoint = 0;
    int verificacao = 0;

    printf("Forneca os valores do primeiro array: \n");
    for( int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);
    }
    printf("Forneca os valores do segundo array: \n");
    for( int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array2[i]);
    }
    for(int i = 0; i < 5; i++){
        for( int j = 0; j < 5; j++){
            if(array1[i] == array2[j]){
                verificacao = 0;
                for( int k = 0; k < tamanhoint; k++){
                    if(array1[i] == arrayintersecao[k]){
                        verificacao = 1;
                        break;
                    }
                }if(!verificacao){
                    arrayintersecao[tamanhoint] = array1[i];
                    tamanhoint++;
                }
            }
        }
    }
    if(tamanhoint == 0){
        printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!\n");
    }else{
        printf("Array de intersecao:\n");
        for(int i = 0; i  < tamanhoint; i++){
            printf("arrayInterseccao[%d] = %d\n", i, arrayintersecao[i]);
            }
        }   
    printf("\n");

    return 0;
}