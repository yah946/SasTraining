#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,r,n,m;
    printf("Entrez une fraction (le numerateur puis le denominateur) :\n");
    scanf("%d",&n);
    scanf(" %d",&m);
    a=n;
    b=m;
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
        printf("le numerateur est : %d\n", n/a);
        printf("le denominateur est : %d\n", m/a);
    return 0;
}
