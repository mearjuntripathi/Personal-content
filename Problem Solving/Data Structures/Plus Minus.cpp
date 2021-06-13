#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],i;
    float positive=0,negative=0,zero=0;
    
    
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
        
        if(arr[i]>0)
            {
                positive++;
            }
        else if(arr[i]<0)
            {
                negative++;
                
            }
            else{
                zero++;
            }
    }
    
    cout<<positive/n<<"\n"<<negative/n<<"\n"<<zero/n;
        
    return 0;
}
