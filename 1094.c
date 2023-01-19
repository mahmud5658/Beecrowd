#include<stdio.h>

int main()

{
    int N,a,i,sum=0,rab=0,rat=0,fro=0;

    char b;

    double prab,prat,pfro;

    scanf("%d",&N);

    for(i=0;i<N;i++) {

        scanf("%d %c",&a,&b);

        sum = sum+a;

        if (b=='C') {
            rab = rab + a;
        }

        else if(b=='R') {
            rat = rat + a;
        }

        else if(b=='S') {
            fro = fro + a;
        }
    }

    prab = ((rab * 100)/(double)sum);

    prat = ((rat * 100)/(double)sum);

    pfro = ((fro * 100)/(double)sum);

    printf("Total: %d cobaias\n",sum);

    printf("Total de coelhos: %d\n",rab);

    printf("Total de ratos: %d\n",rat);

    printf("Total de sapos: %d\n",fro);

    printf("Percentual de coelhos: %.2lf %%\n",prab);

    printf("Percentual de ratos: %.2lf %%\n",prat);

    printf("Percentual de sapos: %.2lf %%\n",pfro);


    return 0;
}