#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    const float r=10, pi=3.14;
    float V;
    printf("Calculons le volume d'une sphère de rayon 10 metres: ");
    V=(4.0/3.0)*pow(r,3)*pi;
    printf("V=%.2f m^3",V);
    return 0;
}
