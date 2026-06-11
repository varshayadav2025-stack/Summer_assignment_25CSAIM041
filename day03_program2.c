#include <stdio.h>
int main()
{
    int start, end,i,j,prime;
    printf("enter starting number:");
    scanf("%d", &start);
    printf("enter ending number:");
    scanf("%d", &end);
    printf("prime number are:\n");
    for(i = start; i <= end; i++)
    {
        if(i<2)
        continue;
        prime = 1;
        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime == 1)
        {}
        printf(%d\n", i);
        }
    }
            return 0;
}