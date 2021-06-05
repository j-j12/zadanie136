#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_PROSTOPADLOSCIAN 1
#define OPCJA_OSTROSLUP   2
#define OPCJA_WYJSCIE   0

void prostopadloscian();
void ostroslup();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("Opcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_PROSTOPADLOSCIAN,  " - pole prostopadloscian");
        printf("%d %s\n", OPCJA_OSTROSLUP,    " - pole ostroslup");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        scanf("%d", &wybrana_opcja);

        switch(wybrana_opcja) {
            case OPCJA_PROSTOPADLOSCIAN:   prostopadloscian();          break;
            case OPCJA_OSTROSLUP:     ostroslup();            break;
            case OPCJA_WYJSCIE:     wyjscie_z_programu = TRUE;  break;
            default:                printf("Niepoprawny kod polecenia.\n");
        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

void prostopadloscian() {

    float a, b, c, wynik;
    printf("podaj a: \n");
    if(scanf("%f", &a)==0)
        {
        printf("\npodaj liczbe\n");
        exit(EXIT_FAILURE);
        }
    else
    {
    if(a<=0)
    {

        printf("podaj a>0\n");
        exit(EXIT_FAILURE);
    }
    }
    printf("podaj b: \n");
    if(scanf("%f", &b)==0)
        {
        printf("podaj liczbe");
        exit(EXIT_FAILURE);
        }
    else
    {
    if(b<=0)
    {

        printf("podaj b>0\n");
        exit(EXIT_FAILURE);
    }
    }
     printf("podaj c: \n");
    if(scanf("%f", &c)==0)
        {
        printf("\npodaj liczbe\n");
        exit(EXIT_FAILURE);
        }
    else
    {
    if(c<=0)
    {

        printf("podaj c wieksze od 0\n");
        exit(EXIT_FAILURE);
    }
    }
    wynik= (2* a * b)+ (2*a *c)+ (2*c*b);




    printf("%s\n" "%.2f" "%s", "\npole prostopadloscianu - ", wynik, "\n\n");
}

void ostroslup() {
    /* TODO - osoba3 */

    /* TODO - w³aœciwe obliczanie pola zrealizowaæ poprzez dedykowan¹ funkcjê */
    printf("\npole ostroslupa - TODO\n\n");
}
