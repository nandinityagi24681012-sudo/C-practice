#include <stdio.h>
int main()
{
    char c =  '*'; 
    int a;
    printf("ENTER NO. OF ROWS\n");
    scanf("%d", &a);
    for(int i = 1; i<= a; i++)
    {
       for(int k = 1;k <= i; k++)
       {
        printf("%c",c );
    }
    printf("\n"); 
    }
    return 0;
}