#include<stdio.h>

int main()

{
    int n,i,j,a,b,sum=0,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++) {

        scanf("%d %d",&a,&b);

        if(a>b) {

            temp = a;

            a = b;

            b = temp;

        }

        for(j=a+1;j<b;j++) {

            if(j%2!=0) {

                sum = sum + j;
            }
        }

        printf("%d\n",sum);
        
        sum =0;

    }

    return 0;
}