#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    
    
    long int max;
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    
    
    long int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            count++;
        }
    }
    printf("%ld",count);
    return 0;
}
