/*
Aufgabe 17: Benzinverbrauch
Im Folgenden sollen zwei Funktionen zum Thema Benzinverbrauch bei Automobilen entworfen
werden.
• Die Funktion „Spritverbrauch“ bekommt die gefahrenen Kilometer und den Normverbrauch
des Fahrzeugs pro 100 km übergeben. Rückgabewert ist die Menge an Benzin in Litern, die
verbraucht worden ist.
• In der zweiten Funktion „Tankinhalt“ soll die Restmenge von Benzin im Tank berechnet
werden. Übergabeparameter sind wieder die Anzahl der gefahrenen Kilometer und der
Normverbrauch des Fahrzeugs pro 100 km und zusätzlich der maximale Tankinhalt.
Vervollständigen Sie die beiden Funktionen und schreiben Sie ein Hauptprogramm, das die beiden
Funktionen aufruft. Verwenden Sie für alle Variablen den Datentyp double.
*/
#include <stdio.h>

double Spritverbrauch(double, double);
double Tankinhalt(double, double, double);

int main(void)
{
    double gefahrenkm;
    double verbrauch;
    double maxtank;
    printf("Bitte geben sie die gefahrenen Kilometer an: \n");
    scanf("%lf", &gefahrenkm);
    printf("Bitte geben sie den Verbrauch auf 100 Kilometern an: \n");
    scanf("%lf", &verbrauch);
    printf("Bitte geben sie den maximalen Tank in Litern an: \n");
    scanf("%lf", &maxtank);

    printf("%lf\n", Spritverbrauch(gefahrenkm, verbrauch));
    printf("%lf\n", Tankinhalt(gefahrenkm, verbrauch, maxtank));

}

double Spritverbrauch(double x, double y)
{
    double verbrauch = x * (y / 100);
    return verbrauch;
}

double Tankinhalt(double x, double y, double z)
{
    double verbrauch = x * (y / 100);
    double resttank = z - verbrauch;
    return resttank;
}