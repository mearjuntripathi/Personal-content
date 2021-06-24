#include<bits/stdc++.h>
using namespace std;

void Final_grade(int n,vector<int> &arr)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > 37)
        {
            int temp=arr[i];
            int val=temp%10;
            
            if(val < 5)
            {
                temp=temp-val;
                temp=temp+5;
            }
            else
            {
                int temp1=10-val;
                temp=temp+temp1;
            }
            if(temp-arr[i]<3)
                arr[i]=temp;
        }
        cout<<arr[i]<<endl;
    }
    
}



int main()
{
    int n;  cin>>n;
    vector<int>grades(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>grades[i];
    }
    
    Final_grade(n,grades);
    
    return 0;
}
