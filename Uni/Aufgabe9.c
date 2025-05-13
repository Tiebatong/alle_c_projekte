/*
    Gegeben sei die Boolesche Funktion
𝑦𝑦 = 𝑎𝑎 ∙ 𝑏𝑏 ∙ 𝑐𝑐 + 𝑎𝑎 ∙ 𝑑𝑑 + 𝑐𝑐 ∙ 𝑑𝑑 . (hier felen die verneinungen)
Berechnen Sie y für alle möglichen Kombinationen für a, b, c und d und geben Sie die Ergebnisse
als Wahrheitstabelle auf dem Bildschirm aus
+ = oder
* = und
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, d;
    printf(" a  |  b  |  c  |  d  |  y  \n\n");
    
    for (a = 0; a < 2; a++)
    {
        
            for (b = 0; b < 2; b++)
        {
            
            for (c = 0; c < 2; c++)
            {
                
                for (d = 0; d < 2; d++)
                {
                    
                    int y = !((a && !b && c) || (a && !d) || (!c && d));

                    printf(" %d  |  %d  |  %d  |  %d  | %d\n", a, b, c, d, y);
                }
            }
        }
    }

    //system("pause");
    return 0;
}
