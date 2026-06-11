#include <stdio.h>
int main()
{
    int num1,num2,max, lcm;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    max =(num1 > num2)  ? num1 : num2;
    while(1)
    {
        if(max % num1 == 0 && max % num2 ==0)
        {
            lcm = max;
            break;
        }
        max++;
    }
    printf("lcm = %d\n", 1cm);
    return 0;
}