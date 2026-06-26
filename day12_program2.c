#include <stdio.h>

int armstrong(int n)
{
    int sum=0,temp=n,r;
    while(temp>0)
    {
        r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
    return sum==n;
}

int main()
{
    int n;
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
