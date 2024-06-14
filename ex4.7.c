#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array1[5];
    int array2[5];
    int arraySoma[5];
    
    printf("forneca os valores do primerio array: \n");
    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);
    }
    printf("forneca os valores do segundo array: \n");
    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array2[i]);
    }
    for(int i = 0; i < 5; i++){
        arraySoma[i]= array1[i] + array2[i];
    }
    for(int i = 0 ; i < 5; i++){
        printf("arraySoma[%d] = %d",i, arraySoma[i]);
        printf("\n");
    }
    

    return 0;
}