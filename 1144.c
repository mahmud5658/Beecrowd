#include<stdio.h>

int main()

{
    int a,b,c,d,e,n;

    scanf("%d",&n);

    for(a=1;a<=5;a++) {
        b=a*a;
        c=a*a*a;

        printf("%d %d %d\n",a,b,c);

        d=b+1;
        e=c+1;

        printf("%d %d %d\n",a,d,e);

    }
    
    return 0;
}