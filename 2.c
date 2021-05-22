#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 2
    /*
        Napisz program, który przesuwa w lewo o jedną pozycję zawartość tablicy
        10-cio elementowej liczb całkowitych tzn. dla elementów i=0,..,8 t[i] po
        wykonaniu programu ma mieć wartość t[i+1], a element t[9] wartość t[0].
        Program ma używać tylko jednej tablicy.
    */
        
        int tablica[10]={1,2,3,4,5,6,7,8,9,10};
        int pamiec,i;
        printf("Przed podmiana:\n");
        for(i=0;i<10;i++){
            printf("tablica[%d] = %d\n",i,tablica[i]);
        }
        printf("Po podmianie:\n");
        pamiec=tablica[9];
        for(i=9;i>0;i--){
            tablica[i]=tablica[i-1];
        }
        tablica[0]=pamiec;
        for(i=0;i<10;i++){
            printf("tablica[%d] = %d\n",i,tablica[i]);
        }
    