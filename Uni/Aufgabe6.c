/*Berechnen Sie den Goldenen Schnitt indem Sie die Fibonacci-Folge bis n = 100 entwickeln. Ge-
ben Sie die einzelnen Werte der berechneten Folge untereinander aus.
Fibonacci Folge:*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     double f1 = 1;
     double f2 = 1;
     double f3;
     float goldener_schnitt;

    for (int i = 0; i < 100; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf("%Lf\n", f3);
        goldener_schnitt = f3 / f1;
    }
    printf("goldener Schnitt: %.6f\n", goldener_schnitt);

    system("pause");
    return 0;
}