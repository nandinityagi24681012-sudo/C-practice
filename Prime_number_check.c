#include <stdio.h>
int main()
{
    int num; 
    printf("Enter number\n");
    scanf("%d", &num);
    int rem;
    if(num<2)
    {
        printf("Number is neither prime nor composite\n");
    }

    else if (num==2)
    {
        printf("Number is prime\n");
    }
    else
    {
    
        for(int i = 2; i<num; i++)
        {
        rem= num%i;
        if (rem== 0)
        {
            printf("Number is not prime\n");
            break;
        }
        else if (i==(num-1))
        {
            printf("Number is prime\n");
        }

     }
    }
    return 0 ;
}