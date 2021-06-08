#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,k,bill,b_charged,sum=0;
    cin >> n >> k;
    for (int i=0;i<n;i++) {
        
        cin >> bill;
        if (i==k)
        continue;
        else
        sum+=bill;
    }
    int b_actual=sum/2;
    cin >> b_charged;
    
    if (b_actual==b_charged) 
        cout << "Bon Appetit" << endl;
    else 
        cout << b_charged-b_actual << endl;
}
