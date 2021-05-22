#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 7
    /*
        Napisz program, który posortowaną tablicę liczb całkowitych sortuje w
        kierunku przeciwnym. Należy wykorzystać początkowe posortowanie tablicy. W
        programie można użyć tylko jedną tablicę.
    */
        
        int tablica[]={1,3,5,7,9,11,13,15,17,19};
        int zmienna,i;
        printf("Przed odwroceniem:\n");
        for(i=0;i<10;i++){
            printf("tablica[%d]=%d\n",i,tablica[i]);
        }
        for(i=0;i<5;i++){
            zmienna=tablica[i];
            tablica[i]=tablica[9-i];
            tablica[9-i]=zmienna;
        }
        printf("\n\nPo odwroceniu:\n");
        for(i=0;i<10;i++){
            printf("tablica[%d]=%d\n",i,tablica[i]);
        }
        