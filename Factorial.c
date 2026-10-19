#include <stdio.h>
int main()
{
    int num;
    printf("Enter number of which factorial is needed\n");
    scanf("%d", &num);
    long long fact;
    fact = 1;
    for (int i=2; i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %lld", num, fact);
    return 0;
}