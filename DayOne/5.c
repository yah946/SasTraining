#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,X;
    printf("Veuillez d'entrer une valeur d'X: ");
    scanf("%d",&x);
    printf("remplacons %d dans 3x^5+2x^4-5x^3-x^2+7x-6\n",x);
    X = 3*pow(x,5) + 2*pow(x,4) - 5*pow(x,3) - pow(x,2)+ 7*x - 6;
    printf("La solution est: %d",X);
    return 0;
}
