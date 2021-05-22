#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 8
    /*
        Napisz program, który wpisuje do kolejnych elementów tablicy 20-to
        elementowej kolejne potęgi liczby n, począwszy od n^0. Liczbę n należy
        wczytać z klawiatury. Potęgowanie należy zrealizować za pomocą wielokrotnego
        mnożenia.
    */
        
        int n,i,potega,tablica[20];
        printf("Podaj liczbe n: ");
        scanf("%d",&n);
        tablica[0]=1;
        for(i=1;i<20;i++){
            tablica[i]=tablica[i-1]*n;
        }
        for(i=0;i<20;i++){
            printf("%d^%d=%d\n",n,i,tablica[i]);
        }
        