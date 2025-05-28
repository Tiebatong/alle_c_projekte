#include <stdio.h>
#include <stdlib.h>

double Spritverbrauch(double Kilometer, double Verbrauch);
double Tankinhalt(double Kilometer, double Verbrauch, double MaxTank);

int main(void)
{
    double Kilometer = 0;
    double Verbrauch = 0;
    printf("Bitte geben sie die gefahrenen Kilometer ein: \n");
    scanf("%lf", & Kilometer);
    printf("Bitte geben sie den Verbrauch pro 100 km an ein: \n");
    scanf("%lf", & Verbrauch);
    printf("Verbrauch : %lf", Spritverbrauch(Kilometer, Verbrauch));

    system("pause");
    return 0;
    

}

double Spritverbrauch(double Kilometer, double Verbrauch)
{
    double verbrauch = Kilometer * (Verbrauch / 100);
    return verbrauch;



}
double Tankinhalt(double Kilometer, double Verbrauch, double MaxTank)
{
    double verbrauch = Kilometer * (Verbrauch / 100);
    double RestTank = MaxTank - verbrauch;

}