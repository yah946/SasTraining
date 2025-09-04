#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,r;
    printf("Entrez deux entiers : \n");
    scanf("%d",&a);
    scanf(" %d",&b);
    //Si l'un de deux nobmers est null.
    if(a==0)
        printf("le pgcd est: %d",b);
    else if (b==0)
        printf("le pgcd est: %d",a);
    //Si les deux nombers differents a 0.
      //Algorithme d'Euclide
    while (b != 0) {
            r = a % b;
            a = b;
            b = r;
        }
        printf("Le PGCD est : %d\n", a);
    return 0;
}
