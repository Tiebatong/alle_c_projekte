#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int weiter = 1;
    long long eingabe;
    printf("Bitte geben sie eine 10 stellige Zahl ein: \n");
    while (weiter)
    {
        scanf("%lld", & eingabe);
        if (eingabe > 0 && eingabe <= 10000000000)
        {
            weiter = 0;
        }
        else 
        {
            printf("out of bounds, bitt erneut eingeben: \n");
        }
    }


    int first_counter = 9;
    int second_counter = 10;
    int Quersumme = 0;

    for (int i = 0; i < 10; i++)
    {
        
        int wert1 = pow(10,first_counter);
        int wert2 = pow(10,second_counter);

        int z = (eingabe / wert1) - (eingabe / wert2) * 10;
        first_counter--;
        second_counter--;
        Quersumme = Quersumme + z;
        printf("%d\n", z);


    }
    printf("Quersumme: %d\n", Quersumme);


    system("pause");
    return 0;
}

long long int_power(int base, int exp)
{
    
}