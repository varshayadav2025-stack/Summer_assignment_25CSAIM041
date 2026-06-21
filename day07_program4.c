#include <stdio.h>
int reverse = 0;
int reverseDigits(int n) 
{
    if (n == 0) 
        return reverse;
    else 
    {
        reverse = (reverse * 10) + (n % 10);
        return reverseDigits(n / 10);
    }
   int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d\n", n, reverseDigits(n));
    return 0; 
}