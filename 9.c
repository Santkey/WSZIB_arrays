#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 9
    /*
        Napisz program, który zamienia liczbę całkowitą dziesiętną na system dwójkowy
        (bez użycia funkcji matematycznych dostępnych w C i formatu binarnego).
    */
        
        int dziesietna,j=2,potega=2,suma=3,i;
        do{
            printf("Podaj liczbe wieksza od 0 do przeliczenia na binarny: ");
            scanf("%d",&dziesietna);
            printf("Wczytalem: %d\n",dziesietna);
        }while(dziesietna<0);
        if(dziesietna>1){
            while(suma<dziesietna){
                potega=potega*2;
                suma=suma+potega;
                j++;
            }
        }else{
            j=1;
            potega=1;
        }
        int binarna[j];
        printf("%d w przeliczeniu na binarny to: ",dziesietna);
        for(i=0;i<j;i++){
            if(dziesietna>=potega){
                //printf("%d>=%d\n",dziesietna,potega);
                binarna[i]=1;
                dziesietna=dziesietna-potega;
            }else{
                //printf("%d<%d\n",dziesietna,potega);
                binarna[i]=0;
            }
            potega=potega/2;
            printf("%d",binarna[i]);
        }
        
