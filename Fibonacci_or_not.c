#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,x=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
       {
           x++;
        break;
       }
       a=b;
       b=c;
    }
    if(x!=0)
    printf("True");
    else
    printf("False");
}