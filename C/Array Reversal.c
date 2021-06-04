#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    for(int i=n; i>=1; i--)
          {   
            printf("%d ",arr[i-1]);
        }
return 0;    
}
