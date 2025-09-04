
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,Lw9t;
    printf("Le tableau suivant presente les vols quotidiens d'une ville a une autre :\n");
    printf("Heure de depart     Heure d'arrivee\n");
    printf("8h00 a.m.           10h16 a.m.\n");
    printf("9h43 a.m.           11h52 a.m.\n");
    printf("11h19 a.m.          1h31 p.m.\n");
    printf("12h47 p.m.          3h00 p.m.\n");
    printf("2h00 p.m.           4h08 p.m.\n");
    printf("3h45 p.m.           5h55 p.m.\n");
    printf("7h00 p.m.           9h20 p.m.\n");
    printf("9h45 p.m.           11h58 p.m.\n");
    printf("Veuillez d'entrer une heure (HH:MM)");
    scanf("%d:%d",&h,&m);
    Lw9t=h*60+m;
    printf("Le temps par minutes %dmin\n",Lw9t);
    if(Lw9t>480 && Lw9t<583){
        printf("L'heure de depart la plus proche est 08:00 a.m., arrivant a 10:16 q.m.");
    }
    else if(Lw9t>583 && Lw9t<679){
        printf("L'heure de depart la plus proche est 09:43 a.m., arrivant a 11:53 a.m.");
    }
    else if(Lw9t>679 && Lw9t<767){
       printf("L'heure de depart la plus proche est 11:19 a.m., arrivant a 01:31 p.m.");
    }

    else if(Lw9t>767 && Lw9t<840){
        printf("L'heure de depart la plus proche est 12:47 p.m., arrivant a 3:00 p.m.");
    }
    else if(Lw9t>840 && Lw9t<945){
        printf("L'heure de depart la plus proche est 02:00 p.m., arrivant a 04:08 p.m.");
    }
    else if(Lw9t>945 && Lw9t<1075){
        printf("L'heure de depart la plus proche est 03:45 p.m., arrivant a 05:55 p.m.");
    }
    else if(Lw9t>1140 && Lw9t<1305){
         printf("L'heure de depart la plus proche est 07:00 p.m., arrivant a 09:20 p.m.");
    }
    else if(Lw9t>1305){
         printf("L'heure de depart la plus proche est 09:45 p.m., arrivant a 11:58 p.m.");
    }
    else
    printf("Mcha 3lik Tran!");
    return 0;
}
