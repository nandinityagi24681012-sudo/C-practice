#include <stdio.h>
int main()
{
    int limit_num;
    printf("Enter Number upto which primes are required \n");
    scanf("%d", &limit_num);

    int num;
    int rem;
    for (num=1;num <= limit_num; num++)
    {
        if(num==2)
        {
            printf("%d, ", 2 );
        }
        else
        {
        for(int i = 2; i<num; i++)
        {
        rem= num%i;
        if (rem== 0)
        {
            break;
        }
        else if (i==(num-1))
        {
            printf("%d, ", num);
        }

     }
    }

    }
    return 0;
}