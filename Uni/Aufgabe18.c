/*
Aufgabe 18: Potenzreihe
Schreiben Sie ein Programm, das einen Winkel a zwischen -90° bis +90° einliest und dann den
Wert sin(a) auf dem Bildschirm ausgibt. Benutzen Sie nicht die Funktion sin() aus der Bibliothek
math.h, sondern berechnen Sie den Wert sin(a) innerhalb einer eigenen Funktion durch die Nähe-
rung der Sinusfunktion als Potenzreihe bis n=5. Schreiben Sie auch eigene Funktionen zur Berech-
nung der Fakultäten und Potenzen. Nutzen Sie in Ihrem Programm ausschließlich lokale Variablen.
Sinusfunktion als Potenzreihe:
*/
#include <stdio.h>

int factorial(int a);

int main(void)
{
    int a = 0;
    printf("Bitte geben sie den Winkel a ein: \n");
    scanf("%d", &a);

    printf("%d\n", factorial(a));
    return 0;
}

int factorial(int x)
{
    int fac = 1;
    
    for (int i = 0; i < x; i++)
    {
        fac = fac * (x - i);
    }
    return fac;
}