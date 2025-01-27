#include <stdio.h>

int main()
{
    double x = 1.000123123;
    short unsigned s = 3;
    char c = 'c';

    double *ptr_x = &x;
    short unsigned *ptr_s = &s;
    char *ptr_c = &c;

    //STAMPO I VALORI DELLE VARIABILI
    printf("%f\n", x);
    printf("%d\n", s);
    printf("%c\n", c);

    //STAMPO I VALORI DENTRO GLI INDIRIZZI DI MEMORIA
    printf("%f\n", *ptr_x);
    printf("%d\n", *ptr_s);
    printf("%c\n", *ptr_c);

    //STAMPO GLI INDRIZZI DI MEMEORIA
    printf("%p\n", ptr_x);
    printf("%p\n", ptr_s);
    printf("%p\n", ptr_c);

}