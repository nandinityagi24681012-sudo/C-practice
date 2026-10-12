#include <stdio.h>
int main()
{
    int a;
    printf("Enter number\n");
    scanf("%d", &a);
    printf("Table of %d is\n",a);
    for(int i=1;i<=10; i++ )
    {
        
        printf("%d X %d = %d\n " , a,i, (a*i));

    }
    return 0;

}