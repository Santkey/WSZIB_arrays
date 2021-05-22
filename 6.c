#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 6
    /*
        Napisz program, który oblicza iloczyn tylko tych elementów całkowitoliczbowej
        tablicy 10-cio elementowej, które są parzyste.
    */
        
        int tablica[]={1,2,3,4,5,6,7,8,9,10};
        int iloczyn=0,i;
        printf("Iloczyn: ");
        for(i=0;i<10;i++){
            if(tablica[i]%2==0){
                if(iloczyn!=0){
                    iloczyn=iloczyn*tablica[i];
                    printf("*%d",tablica[i]);
                }else{
                    iloczyn=tablica[i];
                    printf("%d",tablica[i]);
                }
            }
        }
        printf("=%d",iloczyn);
        