#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for( int i=0; i<n; i++)
{
    printf("Enter element number %d  \n", i+1);
    scanf("%d", &arr[i]);
}
int min = arr[0];
int s;
for (int t=0; t<n-1; t++)
{
    for (int i =0+t; i<n; i++)
    {
        if (arr[i]<min)
        {
            s = arr[t];
            min = arr[i];
            arr[t] = min;
            arr[i] = s;
        }
    }
    min = arr[t+1];
}
printf("The sorted array is: ");
for (int i=0; i<n; i++)
{
    printf("%d ", arr[i]);
}
return 0;
}

