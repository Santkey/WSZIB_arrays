#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 3
    /*
        Napisz program, który z dwóch 10-cio elementowych tablic znakowych tworzy
        trzecią złożoną na zmianę z elementów to jednej, to drugiej tablicy.
    */
        
        char tab1[]={'A','B','C','D','E','F','G','H','I','J'};
        char tab2[]={'a','b','c','d','e','f','g','h','i','j'};
        char tablica[20];
        int i;
        for(i=0;i<10;i++){
            tablica[i*2]=tab1[i];
            tablica[i*2+1]=tab2[i];
        }
        for(i=0;i<20;i++){
            printf("tablica[%d] = %c\n",i,tablica[i]);
        }
    