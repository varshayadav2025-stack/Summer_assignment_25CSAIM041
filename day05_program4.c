#include <stdio.h>
int main()
{
    int num , i, largestprime = 0, j, is prime;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 2; i <= num; i++)
    {
        is prime = 1;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                is prime = 0;
                break;
            }
        }
        if(is prime && num % i == 0)
            largestprime = i;
    }
    if(largestprime != 0)
        printf("The largest prime factor of %d is %d.", num, largestprime);
    else
        printf("%d has no prime factors.", num);
    return 0;

}