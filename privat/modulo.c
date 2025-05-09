#include <stdio.h>

int modulo(int x, int y) 
{
    //x % y
    int z = x / y;
    int n = z * y;
    int m = x - n;
    return m;
}
