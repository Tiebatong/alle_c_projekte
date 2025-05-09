/*
Es soll im Folgenden der Durchmesser, die Oberfläche und das Volumen einer Kugel anhand des
Radius berechnet werden. Der Radius wird von der Tastatur eingelesen. Die Ergebnisse der Be-
rechnungen von Durchmesser, Oberfläche und Volumen sollen in dieser Reihenfolge in einem Ar-
ray gespeichert werden! Die Kreiszahl PI soll als Konstante im Programm verankert werden. Zum
Schluss sollen Durchmesser, Oberfläche und Volumen auf dem Bildschinn ausgegeben werden.
Schreiben sie unten das entsprechende C-Programm.
*/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    const float pi = 3.14159;
    float radius;
    float Kugel_berechnung[10]; // Durchmesser, Oberfläche, Volumen
    int Rundungs_stellen;
    

    printf("Bitte geben sie hier den Radius an: \n");
    scanf("%f", &radius);

    printf("Auf wie viele Stellen soll gerundet werden? \n");
    scanf("%d", &Rundungs_stellen);

     
    Kugel_berechnung[0] = radius * 2;

     
    Kugel_berechnung[1] = 4 * pi * (radius * radius);

     
    Kugel_berechnung[2] = (4 / 3) * pi * (radius * radius * radius);

    printf("Durchmesser: %.*f\n", Rundungs_stellen, Kugel_berechnung[0]);
    printf("Oberflaeche: %.*f\n", Rundungs_stellen, Kugel_berechnung[1]);
    printf("Volumen: %.*f\n", Rundungs_stellen, Kugel_berechnung[2]);
    system("pause");
    return 0;
}
