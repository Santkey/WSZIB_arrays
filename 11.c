#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 11
    /*
        Napisz program, który wczytuje dowolną liczbę całkowitą x oraz indeks
        całkowity i z przedziału <0;9>, a następnie wstawia do elementu tablicy o
        indeksie i wartość x w ten sposób, że aby nie stracić zawartości elementu o
        indeksie i należy elementy od i do 9 "rozsunąć" w prawo. Należy zadeklarować
        co najmniej 11-elementową tablicę.
    */
        
        int tablica[11]={1,4,8,3,6,2,8,2,7,4};
        int indeks,liczba,i;
        printf("Tablica przed: ");
        for(i=0;i<11;i++){
            printf("%d,",tablica[i]);
        }
        printf("\nPodaj liczbe calkowita do wstawienia: ");
        scanf("%d",&liczba);
        do{
            printf("Podaj indeks w ktory wstawic liczbe w zakresie 0-9: ");
            scanf("%d",&indeks);
        }while(indeks<=0||indeks>=9);
        for(i=10;i>indeks;i--){
            tablica[i]=tablica[i-1];
        }
        tablica[indeks]=liczba;
        printf("Tablica po: ");
        for(i=0;i<11;i++){
            printf("%d,",tablica[i]);
        }
        