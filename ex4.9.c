#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array[5];
    int arrayinvertido[5];

    for(int i = 0; i < 5; i ++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < 5; i++){
        arrayinvertido[i] = array[4 - i];
    }
    for(int i =0; i < 5; i++){
        printf("arrayInv[%d] = %d\n", i, arrayinvertido[i]);
    }
    printf("\n");

    return 0;
}