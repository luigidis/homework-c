#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int randomInt(int a, int b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    return rand() % (b - a + 1) + a;
}

double randomDouble(double a, double b)
{
    if (a > b)
    {
        double temp = a;
        a = b;
        b = temp;
    }

    return ((double)rand() / RAND_MAX) * (b - a) + a;
}

int main()
{
    double D[10];
    int A[10];

    double *ptr_D = D;
    int *ptr_A = A;

    double d1 = 1.25;
    double d2 = 90;

    int a1 = 10;
    int a2 = 50;

    ptr_D[0] = randomDouble(d1, d2);
    ptr_D[1] = randomDouble(d1, d2);
    ptr_D[2] = randomDouble(d1, d2);
    ptr_D[3] = randomDouble(d1, d2);
    ptr_D[4] = randomDouble(d1, d2);
    ptr_D[5] = randomDouble(d1, d2);
    ptr_D[6] = randomDouble(d1, d2);
    ptr_D[7] = randomDouble(d1, d2);
    ptr_D[8] = randomDouble(d1, d2);
    ptr_D[9] = randomDouble(d1, d2);

    ptr_A[0] = randomInt(a1, a2);
    ptr_A[1] = randomInt(a1, a2);
    ptr_A[2] = randomInt(a1, a2);
    ptr_A[3] = randomInt(a1, a2);
    ptr_A[4] = randomInt(a1, a2);
    ptr_A[5] = randomInt(a1, a2);
    ptr_A[6] = randomInt(a1, a2);
    ptr_A[7] = randomInt(a1, a2);
    ptr_A[8] = randomInt(a1, a2);
    ptr_A[9] = randomInt(a1, a2);

    printf("%f\n", *D); //Puntatore che indica al primo elemento dell'array D
    printf("%f\n", D[4]);


    for (int i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
        {
            //Stampo valore e indirizzo di A
            printf("Valore in A per l'indice(%d) = %d\n", i, *(ptr_A + i));
            printf("Indirizzo di memoria per il valore nell'indice %d = %p\n", i, &A[i]);

        }
        else 
        {
            // Stampo valore e indirizzo di D
            printf("Valore in D per l'indice(%d) = %f\n", i, *(ptr_D + i));
            printf("Indirizzo di memoria per il valore nell'indice %d = %p\n", i, &D[i]);

        }

    }
}