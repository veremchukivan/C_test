#include <stdio.h>
#include <string.h>
#include <math.h>


void ulpha1(){
/*Používateľ zadáva v tejto úlohe desatinné číslo (cena vstupenky), celé číslo (počet
kusov) a reťazec (junior, senior alebo basic). Program vypočíta, koľko bude treba zaplatiť
za vstupenky (juniori majú 50% zľavu, seniori platia 25% zľavu, ostatní základné
vstupné). V texte zadania musí byť aj ukážka, v akom formáte je vstup a výstup
in:20.50
3
junior

out: 30.75 EUR*/
    float cena_vstupenky;
    int pocet_kusov;
    char typ_vstupenky[10];
    float zlava = 0.0;
    float celkova_cena;

    printf(" ");
    scanf("%f", &cena_vstupenky);
    printf("");
    scanf("%d", &pocet_kusov);
    printf("");
    scanf("%s", typ_vstupenky);

    if (strcmp(typ_vstupenky, "junior") == 0) {
        zlava = 0.5;
    } else if (strcmp(typ_vstupenky, "senior") == 0) {
        zlava = 0.25;
    }

    celkova_cena = pocet_kusov * cena_vstupenky * (1 - zlava);

    printf("%.2f",celkova_cena);


}


void ulha2(){
/*Napíšte program, ktorý zo vstupu načíta 8 čísiel (oddelené medzerami) a vytvorí z nich telefónne čislo vo formáte "+421 9xx xxx xxx".

Príklad:

in: 1 2 3 4 5 6 7 8

out: +421 912 345 678
*/
    int cif[8];

    for (int i=0;i<8;i++){
        scanf("%d",&cif[i]);
    }

    printf("+421 9%d%d %d%d%d %d%d%d\n",cif[0],cif[1],cif[2],cif[3],cif[4],cif[5],cif[6],cif[7]);
}


void uloha3(){
 /*Napíšte program, ktorý zo vstupu načíta binárne 8-bitové číslo (čísla sú oddelené medzerami) a konvertuje ich do desiatkovej sústavy.

Príklad:

in: 1 0 0 1 0 1 1 0

out: 150*/
    int c[8];
    int ss=0;

    for (int i=0; i<8;i++){
        scanf("%d",&c[i]);
    }
    for(int i =0;i<8;i++)
    {
        ss+=c[i]*pow(2,7-i);
    }

    printf("%d\n",ss);
}

void uloha4(){
/*Napíšte program, ktorý zo vstupu načíta 3 čísla (oddelené medzerami) a vytvorí z nich dátum vo formáte "DD-MM-YYYY".

Príklad:

in: 3 11 2024

out: 03-11-2024*/
    int m,y,d;

    scanf("%d %d %d",&d,&m,&y);

    printf("%02d-%02d-%d\n",d,m,y);
}

int main(void) {

//    ulpha1();
//    ulha2();
//    uloha3();
      uloha4();


    return 0;
}
