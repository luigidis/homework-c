#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX(a, b) (a > b ? a : b)

int main()
{
    int x = 2;
    float y = 2.0;

    printf("Prima: %d", x);
    printf("Seconda: %f", y);

    // char[] i = MAX('ciao', 's');
    // printf("TEST:%c", i);

    for (int z = 0; z <= 10; z++)
    {
        printf("Random: %d\n", rand());
    }

    for (int a = 0; a < 10; a++)
    {
        srand(time(NULL));

        int random_number = rand();
        printf("Numero casuale: %d \n", random_number);
    }

    double d = 1234.1234;
    int s = (int)(d + 0.9);

    printf("%d\n", s);
    // printf("Prova a fare x / 0  =  %d", x / 0);
    // printf("Prova a fare y / 0 = %f", y / 0 );
    return 0;
}