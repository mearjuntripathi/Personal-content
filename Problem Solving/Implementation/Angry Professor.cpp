#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int num; cin >> num;
    for (int i=0; i<num; i++)
    {
        int n,k; cin >> n >> k;
        int count=0; 
        for (int i=0; i<n; i++)
        {
            int a; cin >> a;
            if (a<=0) count++; 
        }
        if (count>=k)
            cout << "NO" << '\n'; 
        else cout << "YES" << '\n';
    }
    
    return 0;
}

