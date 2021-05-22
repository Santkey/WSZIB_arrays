#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 10
    /*
        Napisz program, który wstawia dowolną liczbę zmiennoprzecinkową do
        posortowanej tablicy 10-cio elementowej o elementach -5,5; -1,2; 0; 0; 1,4;
        3,5; 6,8; 10; 10; 14,5. tak, aby tablica była nadal posortowana bez
        sortowania całego wektora. Należy zadeklarować tablicę 11-to elementową, żeby
        wstawiany element się zmieścił.
    */
        
        float tablica[]={-5.5,-1.2,0,0,1.4,3.5,6.8,10,10,14.5,0};
        float wczytana;
        int i;
        scanf("%f",&wczytana);
        printf("Wczytano %.2f\n",wczytana);
        printf("Przed:\n");
        for(i=0;i<11;i++){
            printf("tablica[%d] = %.2f\n",i,tablica[i]);
        }
        for(i=9;i>0;i--){
            //printf("jestem");
            if(tablica[i]>wczytana){
                //printf("t>w\n");
                tablica[i+1]=tablica[i];
            }else{
                //printf("t<=w - break");
                tablica[i+1]=wczytana;
                break;
            }
        }
        printf("\nPo:\n");
        for(i=0;i<11;i++){
            printf("tablica[%d] = %.2f\n",i,tablica[i]);
        }
        