#include<stdio.h>

int main()

{
    int ih,im,fh,fm,d=0;

    scanf("%d %d %d %d",&ih,&im,&fh,&fm);

    d = ((fh*60+fm) - (ih*60+im));

    if(d<=0) {

        d=d+24*60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d/60,d%60);

    }

    else {

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d/60,d%60);
    }


    return 0;
}