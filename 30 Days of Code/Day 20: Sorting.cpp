#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>&arr , int n)
{
    int count=0;
    //no of passes = n-1
    for(int i=0 ; i<n-1 ; i++)  //for passes
    {
        for(int j=0; j<(n-i-1) ; j++)  //for comparision
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        
    }
    cout<<"Array is sorted in "<<count<<" swaps."<<endl;
}


void print(vector<int>&arr,int n)
{
        
        cout<<"First Element: "<<arr[0]<<endl;
        cout<<"Last Element: "<<arr[n-1]<<endl;
}
    
int main()
{
    int n;  cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)    cin>>arr[i];
    BubbleSort(arr,n);
    print(arr,n);
    return 0;
}
