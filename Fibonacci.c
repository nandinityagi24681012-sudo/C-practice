#include  <stdio.h>
int main()
{
    int num;
    printf("Enter Number of terms upto which series is to be printed\n");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Enter a positive integer");
    }
    else if (num ==1)
    {
        printf("0");
    }
    else if (num ==2)
    {
        printf("0, 1");
    }
    else
    {
    int lg = 1;
    int slg = 0;
    int dig;
    printf("0, 1 ");
    for(int i=2; i <num; i++)
    {
      dig= lg+ slg ;
      printf(", %d ", dig);
      slg=lg;
      lg= dig;
    }
    }
}