#include <stdio.h>
#include <stdlib.h>

int main()
{

// Zadanie 1 
    /*
        Napisz program, który przesuwa w prawo o jedną pozycję zawartość tablicy
        10-cio elementowej liczb całkowitych tzn. dla elementów i=0,..,8 t[i+1] po
        wykonaniu programu ma mieć wartość t[i], a element t[0] wartość t[9]. Program
        ma używać tylko jednej tablicy.
    */

        int tablica[10]={1,2,3,4,5,6,7,8,9,10};
        int pamiec,i;
        printf("Przed podmiana:\n");
        for(i=0;i<10;i++){
            printf("tablica[%d] = %d\n",i,tablica[i]);
        }
        printf("Po podmianie:\n");
        pamiec=tablica[0];
        for(i=0;i<9;i++){
            tablica[i]=tablica[i+1];
            printf("tablica[%d] = %d\n",i,tablica[i]);
        }
        tablica[9]=pamiec;
        printf("tablica[9] = %d\n",tablica[9]);
    