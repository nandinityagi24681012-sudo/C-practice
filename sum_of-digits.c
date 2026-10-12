#include <stdio.h>
int main()
{
    int Num;
    printf("Enter number\n");
    scanf("%d", &Num);
    int sum= 0;
    while((Num>0))
    {
    int dig;
    dig=Num%10;
    sum =sum + dig;
    Num = Num/10;
    }
    printf("Sum is : %d", sum);
    return 0;
}