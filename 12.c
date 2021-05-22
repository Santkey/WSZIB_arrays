#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 12
    /*
        Napisz program, który oblicza średnią arytmetyczną elementów podzielnych
        przez 15 w 10-cio elementowej tablicy liczb całkowitych.
    */
        
        int tablica[]={1,16,30,15,22,3,73,67,42,31};
        float suma=0,elementow=0,srednia;
        int i;
        printf("Srednia liczb ");
        for(i=0;i<10;i++){
            if(tablica[i]%15==0){
                suma+=tablica[i];
                elementow++;
                printf("%d,",tablica[i]);
            }
        }
        srednia = suma/elementow;
        printf(" wynosi %.2f",srednia);
        