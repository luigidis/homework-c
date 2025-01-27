#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double randomDouble(double a, double b)
{
    if (a > b)
    {
        double temp = a;
        a = b;
        b = temp;
    }
    

    return ((double) rand() / RAND_MAX) * (b - a) + a;
}

int main()
{
    int N = 200;
    double V[N];
    double *ptr_V = V;
    double r1 = 10;
    double r2 = 50;

    
    for (int i = 0; i < N; i++)
    {
        // ptr_V[i] = randomDouble(r1, r2);
        *(ptr_V + i) = randomDouble(r1, r2);
        printf("Valore inserito: %f\n", V[i]);
    }

    const double *ptr = V;
    printf("Elementi con indici non divisibili per 2 e per 3\n");
    for (int i = 0; i < N; i++)
    {
        if(i % 2 != 0 && i % 3 != 0)
        {
            printf("%.2f\n", *(ptr + i));
        }
    }

    double* const ptr_const = V;

    for (int i = 0; i < N; i++)
    {
        if(i % 2 != 0 && i % 3 != 0)
        {
            *(ptr_const + i) = randomDouble(100, 200);
            printf("Nuovo valore: %f\n", *(ptr_const + i));
        }
    }


    return 0;
}