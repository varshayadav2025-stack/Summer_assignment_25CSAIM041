#include <stdio.h>
int main()
{
    int num, product = 1, remainder;
    printf("enter a number:");
    scanf("%d", &num);
    while(num !=0)
    {
        remainder = num % 10;
        product = product* remainder;
        num = num / 10;
    }
    printf("product of digits = %d\n",product);
    return 0;
}