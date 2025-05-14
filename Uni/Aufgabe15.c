#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    int i = 0;
    int eingabe = 0;
    int primfak = 0;
    int faktoren[10];
    int primzahl[30] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

    printf("Bitte geben sie eine Zahl zwischen 2 und 100 ein: ");
    scanf("%d", &eingabe);

    int zwischen = eingabe;


    // bespiel 12

    for (int i = 0; i < 20; i++)
    {
        if (zwischen % primzahl[i] == 0)
        {
            faktoren[i] = primzahl[i];
            zwischen = zwischen / primzahl[i];
        }

    }


    //system("pause");
    return 0;
}