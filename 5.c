#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadanie 5
    /*
        Napisz program, który z dwóch 10-cio elementowych tablic znakowych tworzy
        trzecią zawierającą spółgłoski z tych tablic.
    */
        
        char tab1[]={'a','h','t','U','F','e','J','p','Y','n'};
        char tab2[]={'w','G','x','O','f','L','c','I','z','N'};
        int ilespolglosek=0,i;
        int spolgloska=0;
        for(i=0;i<10;i++){
            if(tab1[i]!='e'&&tab1[i]!='u'&&tab1[i]!='i'&&tab1[i]!='o'&&tab1[i]!='a'&&tab1[i]!='y'&&tab1[i]!='E'&&tab1[i]!='U'&&tab1[i]!='I'&&tab1[i]!='O'&&tab1[i]!='A'&&tab1[i]!='Y'){
                ilespolglosek++;
            }
            if(tab2[i]!='e'&&tab2[i]!='u'&&tab2[i]!='i'&&tab2[i]!='o'&&tab2[i]!='a'&&tab1[i]!='y'&&tab2[i]!='E'&&tab2[i]!='U'&&tab2[i]!='I'&&tab2[i]!='O'&&tab2[i]!='A'&&tab1[i]!='Y'){
                ilespolglosek++;
            }
        }
        printf("Spolglosek jest %d\n\n",ilespolglosek);
        char tablica[ilespolglosek];
        for(i=0;i<10;i++){
            if(tab1[i]!='e'&&tab1[i]!='u'&&tab1[i]!='i'&&tab1[i]!='o'&&tab1[i]!='a'&&tab1[i]!='y'&&tab1[i]!='E'&&tab1[i]!='U'&&tab1[i]!='I'&&tab1[i]!='O'&&tab1[i]!='A'&&tab1[i]!='Y'){
                tablica[spolgloska]=tab1[i];
                spolgloska++;
                printf("Spolgloska %d to %c\n",spolgloska,tablica[spolgloska-1]);
            }
            if(tab2[i]!='e'&&tab2[i]!='u'&&tab2[i]!='i'&&tab2[i]!='o'&&tab2[i]!='a'&&tab1[i]!='y'&&tab2[i]!='E'&&tab2[i]!='U'&&tab2[i]!='I'&&tab2[i]!='O'&&tab2[i]!='A'&&tab1[i]!='Y'){
                tablica[spolgloska]=tab2[i];
                spolgloska++;
                printf("Spolgloska %d to %c\n",spolgloska,tablica[spolgloska-1]);
            }
        }
        
