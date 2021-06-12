#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int arr[5],i,min,max,sum=0;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<sum-max<<" "<<sum-min;
    return 0;
}
