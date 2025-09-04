#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,Var20,R,Var10,Var5,Var1;
    printf("Entrer un montant en $: ");
    scanf("%d",&m);

    Var20=m/20;
    printf("Billets de 20$ : %d\n",Var20);
    m=m%20;
    Var10=m/10;
    printf("Billets de 10$ : %d\n",Var10);

    m=m%10;
    Var5=m/5;
    printf("Billets de 5$ : %d\n",Var5);

    R=m%5;
    printf("Billets de 1$ : %d\n",R);


    return 0;
}
