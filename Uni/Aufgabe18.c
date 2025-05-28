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
#include <stdlib.h>

const float pi = 3.141592653;
double factorial(int x);
double power(double basis, int exponent);

int main(void)
{
    double a = 0;
    printf("Bitte geben sie den Winkel a ein: \n");
    scanf("%lf", &a);
    a = (a / 180) * pi;
    double sinus = 0;

    for (int n = 0; n < 5; n++)
    {
        int exp = 2 * n + 1;
        
        double term = power( -1, n) * power(a, exp) / factorial(exp);
        sinus += term;
    }

    printf("der Sinus betraegt: %lf", sinus);
    system("pause");
    return 0;
    
}


double factorial(int x)
{
    double fac = 1;
    
    for (int i = 0; i < x; i++)
    {
        fac = fac * (x - i);
    }
    return fac;
}

double power(double basis, int exponent) 
{
    double zwischen = 1;
    for (int m = 0; m < exponent; m++)
    {
        zwischen *= basis;
    }
    return zwischen;
}