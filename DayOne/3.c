#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    const float pi=3.14;
    int r;
    float V;
    printf("Veuillez entrer le rayon d'une sphere: ");
    scanf("%d",&r);
    printf("Calculons donc le volume d'une sphere de rayon r=%d\n",r);
    V=(3.0/4.0)*pow(r,3)*pi;
    printf("V=%.2f",V);
    return 0;

}


