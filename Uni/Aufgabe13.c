#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int jahr;
    printf("Bitte geben sie ein Jahr an: \n");
    scanf("%d", &jahr);
    
    if (jahr % 4 == 0 && jahr % 100 != 0 || jahr % 400 == 0 )
    {
        printf("Schaltjahr\n");
    }
    else
    {
        printf("kein Schaltjahr \n");
    }



    system("pause");
    return 0;
}