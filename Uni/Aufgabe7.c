
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int eingabe;
    int x = 1;
    printf("geben sie ien Zahl ein: ");
    scanf("%d", &eingabe);
    if ((eingabe | x) != eingabe)
    {
        printf("even\n");
    }
    else
    {
        printf("uneven\n");
    }



    system("pause");
    return 0;
}