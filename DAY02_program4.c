 #include <stdio.h>
 int main()
 {
 int num, original, reversed = 0, remainder;
 printf("enter a number :");
 scanf("%d",&num);
 original = num;
 while( ! = 0)
 {
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num = num /10;
 }
 if (original == reverse)
 {
     printf(%d is a palindrome number\n", original);
 }
        else
        {
        printf("%d is not a palindome number\n", original);
        }
        return 0;
     }