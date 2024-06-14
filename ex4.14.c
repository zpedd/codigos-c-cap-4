#include <stdio.h>
#include <stdlib.h>

int main (void){

    int array[10];
    int novotamanho = 0;

    for( int i = 0; i < 10; i ++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < 10; i++){
        if(array[i] % 2 != 0 ){
            array[novotamanho] = array[i];
            novotamanho++;
        }
    }

    for(int i = 0; i < novotamanho; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");

    return 0;
}