#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    int i = 0;
    int eingabe = 0;
    int primfak = 0;
    int faktoren[10] = {0,0,0,0,0,0,0,0,0,0};
    int primzahl[30] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

    printf("Bitte geben sie eine Zahl zwischen 2 und 100 ein: ");
    scanf("%d", &eingabe);

    int zwischen = eingabe;
    int index = 0;


    // bespiel 27

    for (int i = 0; i < 20; i++)
    {
        
        if (zwischen % primzahl[i] == 0)
        {
            
            faktoren[index++] = primzahl[i]; 
            zwischen = zwischen / primzahl[i];
            i = -1;
        }
        if (zwischen == 1)
        {
            break;
        }       
    }

    for (int y = 0; y < index; y++)
    {
        printf("%d\n", faktoren[y]);
    }



    system("pause");
    return 0;
}