/*
Es soll das Volumen einer Pyramide mit konstanter Breite berechnet werden. Die Länge und Breite
der Pyramide sollen als Ganze Zahlen dargestellt werden. Die Höhe und das Volumen werden als
Gleitkommazahlen behandelt. Füllen Sie dazu den unten Angegebenen C-Lückentext vollständig
aus.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int l = 0;
    const int b = 5;
    float h = 0.0, volumen = 0.0;

    printf("Bitte geben sie die Laenge l ein: ");
    scanf("%d",&l);
    printf("\nBitte geben die die Hoehe h ein: ");
    scanf("%f",&h);

    volumen = 1*b*h/3;

    printf("\nDas Volumen betraegt: %.2f\n", volumen);

    system("pause");
    return 0;
}