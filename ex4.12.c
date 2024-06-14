#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array[5];

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < 4; i++){
        array[i] =  array[i+1];
    }
    //array depois da remocao
    for(int i = 0; i < 4; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");

    return 0;
}