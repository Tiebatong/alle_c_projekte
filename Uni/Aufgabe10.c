#include <stdio.h>
#include <stdlib.h>

/*
    Im Folgenden soll ein gegebener, beliebig langer Vektor von Integerzahlen auf sein größtes und
    kleinstes Element hin untersucht werden. Schreiben sie unten ein Programm, welches diese Aufga-
    be mit Hilfe einer Schleife löst.
*/
int main(void)
{

    int array[10] = {8, 7, 4, 12, 76, 9, 32, 46, 13, 12};
    int groß = array[0];
    int klein = array[0];

    for (int i = 0; i < 10; i++)
    {
        
        if (groß < array[i])
        {
            groß = array[i];
        }
        if (klein > array[i])
        {
            groß = array[i];
        }
        
    }
    printf("Größte Zahl: %d\n", groß);
    printf("Kleinste Zahl: %d\n", klein);

    //system("pause");
    return 0;
}