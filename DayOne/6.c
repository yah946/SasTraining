#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,X;
    int f1,f2,f3,f4,f5;
    printf("Veuillez d'entrer une valeur d'X: ");
    scanf("%d",&x);
    printf("remplacons %d dans ((((3x+2)x-5)x-1)x+7)x-6\n",x);
    X = (((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    printf("La solution est: %d",X);
    return 0;
}
