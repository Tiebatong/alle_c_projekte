
#include <stdlib.h>
#include <stdio.h>

int iseven(int x);

int main(void)
{   
    int z = 0; // Spieler 1
    int y = 0; // Spieler 2
    int rounds = 0;
    int spieler_1_gewonnen = 0;
    int spieler_2_gewonnen = 0;

    while (iseven(rounds)) // stellt sicher, dass die Anzahl der Runden ungrade ist
    {
        printf("Wie viele Runden soll gespielt werden, Zahl muss ungrade sein: \n");
        scanf("%d", &rounds);
    }
    
    for (int n = 0; n < rounds; n++)
    {
        
        printf("Stein  = 1\nSchere = 2\nPapier = 3\n");
        printf("Spieler 1:");
        scanf("%d", &z);
        printf("Spieler 2:");
        scanf("%d", &y);
        printf("\n");

        if (z == y) // Gelichstand
        {
            printf("unentschieden\n\n");
        }
        else if ((z == 1 && y == 2) || (z == 2 && y == 3) || (z == 3 && y == 1)) //Spieler 1 gewinnt
        {
            printf("Spieler 1 gewinnt die Runde\n\n");
            spieler_1_gewonnen++;
        }
        else //Spieler 2 gewinnt
        {
            printf("Spieler 2 gewinnt die Runde\n\n");
            spieler_2_gewonnen++;
        }
        
        
    }
    // bestimmt, welcher Spieler gewonnen hat/mehr Punkte hat
    if (spieler_1_gewonnen > spieler_2_gewonnen) 
    {
        printf("Spieler 1 gewinnt das Spiel mit %d Punkten\n", spieler_1_gewonnen);
    }
    else if (spieler_1_gewonnen < spieler_2_gewonnen)
    {
        printf("Spieler 2 gewinnt das Spiel mit %d Punkten\n", spieler_2_gewonnen);
    }
    else 
    {
        printf("Es steht unendschieden\n");
    }



    int iseven(int x)
    {
        
        
        int y = (x/2)*2;
        if (x == y) 
        {
            return 1;
        }
        else 
        {
            return 0;
        }
        
    }
    
    system("pause");
    return 0;
}

int iseven(int x)
{
    
    
    int y = (x/2)*2;
    if (x == y) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}
