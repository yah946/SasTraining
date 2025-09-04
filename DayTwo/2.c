#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nub;
    int a,b;
    printf("Veuillez entrer un nomber avec deux chiffres: ");
    scanf("%d",&nub);
    printf("Le nomber entre: %d\n",nub);
    a=nub%10;
    b=nub/10;
    printf("Leur inverse est: %d%d",a,b);

    return 0;
}
