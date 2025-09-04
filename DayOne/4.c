#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,a; // m signifie montant // a est le montant avec taxe ajoutée
    printf("Veuillez d'entrer un montant en dollars et en cents: ");
    scanf("%f",&m);
    printf("\n ");
    printf("Le montant :%.3f", m);
    printf("\n ");
    a=(5*m)/100;
    printf("Le montant avec le taxe ajoutee :%.3f", m+a);

    return 0;
}
