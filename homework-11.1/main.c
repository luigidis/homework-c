#include <stdio.h>
#include <float.h>

int main()
{
    // x deve essere minore di 1
    float x = 0.65;
    // y deve essere maggio o uguale a 0
    float y = 2.0556;
    
    //Ricordiamo che il float minimo rappresentabile è 10^-38 quindi:
    float FLOAT_MIN = 1e-38;

    for (int i = 0; i >= 0; i++)
    {
        y = x * y;
        printf("Risultato moltiplicazione %d: %.10e\n", i, y);

        if (y == -FLOAT_MIN)
        {
            printf("Teminate!");
            return 0;
        }
    }

    // printf("\nRisultati delle moltiplicazioni in notazione scientifica:\n");
    // while (y != 0 && y > -FLT_MIN && y < FLT_MIN) {
    //     printf("%.10e\n", y);
    //     y *= x;
    // }

    // Stampa del risultato finale (0 o "0 negativo")
    // printf("\nRisultato finale: %.10e\n", y);

    return 0;
}