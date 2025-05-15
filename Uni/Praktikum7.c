#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int eingabe = 0;
    do 
    {
        printf("1. Parameter eingeben\n");
        printf("2. Flaecheninhalt und Winkel berechnen\n");
        printf("3. Programm beenden\n");
        scanf("%d", & eingabe);

        switch (eingabe)
        {
            case 1: printf("Menuepunkt 1 ausgewaehlt\n"); break;
            case 2: printf("Menuepunkt 2 ausgewaehlt\n"); break;
            case 3: printf("Menuepunkt 3 ausgewaehlt\n"); break;
        }


    }
    while (eingabe != 3);


    //system("pause");
    return 0;
}