#include <stdio.h>

int summe_array(int* arr, int n);

int main(void)
{

    int array_laenge = 5;
    
    int array[5] = {2, 5, 1, 9, 7};

    printf("%d\n",summe_array(&array[0], array_laenge));

    return 0;
}

int summe_array(int* arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *arr++;
    }
    return sum;
}

