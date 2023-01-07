#include<stdio.h>
int main()
{
    int n,sq=0,rem,rs=0,qs=0,rqs=0;
    scanf("%d",&n);
    sq=n*n;
    while(n)
    {
      rem=n%10;
      rs=rs*10+rem;
      n=n/10;
    }
    qs=rs*rs;
    while(qs)
    {
        rem=qs%10;
        rqs=rqs*10+rem;
        qs=qs/10;
    }
    if(sq==rqs)
    printf("True");
    else
    printf("False");
}