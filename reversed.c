#include  <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    int dig;
    int rev= 0;
    while(num>0)
    {
        dig= num%10;
        num= num/10;
        rev = rev*10 + dig;
    }
    printf("Reverse Number is: %d", rev);
    return 0; 