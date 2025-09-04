#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1,d2,m1,m2,a1,a2;
    printf("Entrer deux dates:\n");
    scanf("%d//%d//%d",&m1,&d1,&a1);
    scanf("%d//%d//%d",&m2,&d2,&a2);
    if (a1==a2){
        if (m1==m2){
            if (d1==d2)
                printf("les deux "/dates sont eguax");
            else if (d1<d2)
                printf("la 1ere date est plus tot que la 2eme");
            else
                printf("la 2eme date est plus tot que la 1ere");
        }
        else if (m1<m2)
            printf("la 1ere date est plus tot que la 2eme");
        else
            printf("la 2eme date est plus tot que la 1ere");

    }
    else if (a1<a2)
        printf("la 1ere date est plus tot que la 2eme");
    else
        printf("la 2eme date est plus tot que la 1ere");
    return 0;
}
