#include <stdio.h>

int main(void)
{

    int zahl;
    int *p;
    p = &zahl;
    *p = 45;
    printf("Adresse von Zahl: %p\n", &zahl);
    //Aufgaben A19, A20

    return 0;
}