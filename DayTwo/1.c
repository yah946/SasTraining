#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gc1,idg,c,nub,ch;
    int a[13]={9,7,8,0,3,9,3,9,7,9,5,0,3};
    printf("Entrer un ISBN (13 chiffres): ");
//    for(int i=1;i<14; i++){
//        scanf("%d",&a[i]);
//    }
//    printf("Prefixe GS1 : %d%d%d\n",a[1],a[2],a[3]);
//    printf("Identifiant de groupe : %d\n",a[4]);
//    printf("Code de l'editeur :%d%d%d\n",a[5],a[6],a[7]);
//    printf("Numero d'article : %d%d%d%d\n",a[8],a[9],a[10],a[11],a[12]);
//    printf("Chiffre de controle : %d\n",a[13]);
    scanf("%d-%d-%d%d-%d",&gc1,&idg,&c,&nub,&ch);
    printf("Prefixe GS1 : %d/n",gc1);
    printf("Identifiant de groupe : %d/n",idg);
    printf("Code de l'editeur : %d/n",c);
    printf("Numero d'article : %d/n",nub);
    printf("Chiffre de controle : %d/n",ch);
    return 0;
}
