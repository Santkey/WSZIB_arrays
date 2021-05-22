#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 4
    /*
        Napisz program, który z dwóch 10-cio elementowych posortowanych tablic liczb
        zmiennoprzecinkowych tworzy trzecią również posortowaną. Należy wykorzystać
        fakt posortowania tablic 10-cio elementowych (do trzeciej tablicy, kolejne
        elementy mają być wstawiane od razu we właściwym miejscu tej tablicy).
    */
        
        double tab1[10]={1.23,2.47,2.89,3.56,8.20,9.34,14.57,27.63,56.34,91.85};
        double tab2[10]={0.37,2.57,7.27,9.24,11.53,26.43,36.41,37.52,73.61,92.52};
        double tablica[20];
        int i=0,j=0,k;
        for(k=0;k<20;k++){
            if((tab1[i]<tab2[j]&&i<10)||j>9){
                tablica[k]=tab1[i];
                i++;
            }else{
                tablica[k]=tab2[j];
                j++;
            }
            printf("tablica[%d] = %.2f\n",k,tablica[k]);
        }
        
