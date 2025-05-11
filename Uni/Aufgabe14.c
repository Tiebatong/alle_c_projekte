#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int weiter = 1;
    int eingabe;
    printf("Bitte geben sie ien Zahl zwischen 1 und 10000 ein: \n");
    while (weiter)
    {
        scanf("%d", & eingabe);
        if (eingabe > 0 && eingabe <= 10000)
        {
            weiter = 0;
        }
        else 
        {
            printf("out of bounds, bitt erneut eingeben: \n");
        }
    }
    // 1234      123 - 123/10
    int s1, s2, s3, s4, s5;
    
    s1 = (eingabe / 1000);
    s2 = (eingabe / 100) - s1 * 10;
    s3 = (eingabe / 10) - (eingabe / 100) * 10;
    s4 = eingabe - (eingabe / 10) * 10; 

    printf("%d\n", s1);
    printf("%d\n", s2);
    printf("%d\n", s3);
    printf("%d\n", s4);

    s5 = s1 + s2 + s3 + s4;
    printf("%d\n", s5);
    


    system("pause");
    return 0;
}