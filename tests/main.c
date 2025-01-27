#include <stdio.h>
#include <string.h>
struct record
{
    float d1;
    int d2;
};

int main()
{
    /*
    struct record rec;
    struct record *alpha = &rec;

    alpha->d2 = 45;
    alpha->d2 = 40;
    (*alpha).d2 = 30;
    printf("%d", rec.d2);
    */

    char *s = "Pippo";
    printf("%s", s);
    printf("%c", s[3]);

    // s[2] = 'x';

    for(int i = 0; i < strlen(s); i++)
    {
        printf("%c -->", s[i]);
    };

    return 0;
}