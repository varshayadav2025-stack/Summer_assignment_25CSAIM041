#include <stdio.h>
int main()
{
    int num, tem, rem ,fact, saum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    tem = num;
    while(tem != 0)
    {
        rem = tem % 10;
        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        saum += fact;
        tem /= 10;
    }
    if(saum == num)
        printf("%d is a strong number.", num);
    else
        printf("%d is not a strong number.", num);
}