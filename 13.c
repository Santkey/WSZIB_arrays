#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 13
    /*
        Napisz program, który oblicza iloczyn elementów podzielnych przez 8 w 10-cio
        elementowej tablicy liczb całkowitych.
    */
        
        int tablica[]={1,8,30,45,16,3,75,32,45,30};
        int iloczyn=1,i;
        printf("Iloczyn liczb podzielnych przez 8 w tablicy elementow: ");
        for(i=0;i<10;i++){
            printf("%d,",tablica[i]);
            if(tablica[i]%8==0){
                iloczyn=iloczyn*tablica[i];
            }
        }
        printf(" wynosi %d",iloczyn);
        