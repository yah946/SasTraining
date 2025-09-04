#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,j;
    printf("Veuillez d'entrer un nombre n\n");
    scanf("%d",&n);
    for(int i=2; i<n; i+=2){
            j=pow(i,2);
        if(j<n){
            printf("%d\n",j);
        }
    }
    return 0;
}
