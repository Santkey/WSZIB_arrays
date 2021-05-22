#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 14
    /*
        Napisz program, który z dwóch 10-cio elementowych tablic liczbowych tworzy
        trzecią w ten sposób, że jej kolejne elementy zawierają na zmianę dwa
        elementy z jednej tablicy i dwa z drugiej.
    */

        int tab1[]={1,2,5,6,9,10,13,14,17,18};
        int tab2[]={3,4,7,8,11,12,15,16,19,20};
        int tablica[20],i;
        for(i=1;i<6;i++){
            tablica[i*4-4]=tab1[i*2-2];
            tablica[i*4-3]=tab1[i*2-1];
            tablica[i*4-2]=tab2[i*2-2];
            tablica[i*4-1]=tab2[i*2-1];
        }
        printf("Tablica po dzialaniu funkcji (2 elementy z tab1, 2 elementy z tab2: ");
        for(i=0;i<20;i++){
            printf("%d,",tablica[i]);
        }
        */
    return 0;
}