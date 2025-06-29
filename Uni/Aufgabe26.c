#include <stdio.h>

int senkrecht_print(float*);
int mittelwert(float*, float*);

int main(void)
{

    float vektor[13] = {1.01, -3.0, 2.2, 5.12, 6.9, 2.43, 1.21, 5.9, 2.0, -4.0, 6.9, -2.24};
    float vektor_mittel[13];
    senkrecht_print(&vektor[0]);
    mittelwert(&vektor[0], &vektor_mittel[0]);
    printf("\nmittelwert:\n");
    senkrecht_print(&vektor_mittel[0]);

    system("pause");
    return 0;
}







int senkrecht_print(float*ptr)
{
    for(int i = 0; i < 13; i++)
    {
        printf("%f\n",ptr[i]);
    }
}
int mittelwert(float*ptr, float*vekm)
{
    
    ptr[0] = 0;
    for(int i = 0; i < 13; i++)
    {
        vekm[i] = (ptr[i] + ptr[i-1]) / 2.0;
    }
}