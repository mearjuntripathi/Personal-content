#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    
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
    cout<<count;
    return 0;
}
