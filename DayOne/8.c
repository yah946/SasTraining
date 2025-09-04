#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,t,pm,n,n2,n3,tax;
    printf("Entrez le montant du pret :");//20000
    scanf("%f",&m);
    printf("Entrez le taux d'interet :");//6
    scanf("%f",&t);
    printf("Entrez le paiement mensuel :");//386.66
    scanf("%f",&pm);
    tax = t/1200 ;
    n = (m-pm) + (m*tax);
    n2= (n-pm) + (n*tax) ;
    n3= (n2-pm) + (n2*tax) ;
    printf("Solde restant apres le premier paiement : %f\n",n); //19713.34
    printf("Solde restant apres le deuxieme paiement : %f\n",n2);//19425.25
    printf("Solde restant apres le troisieme paiement : %f\n",n3);//19135.71

    return 0;
}
