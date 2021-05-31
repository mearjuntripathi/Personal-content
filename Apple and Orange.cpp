#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,m,n,apple,orange,applecount = 0,orangecount = 0;
    cin >> s >> t >> a >> b >> m >> n;
    
    for(int i = 0;i < m;i++)
    {
        cin >> apple;
        if(a+apple >= s && a+apple <= t)applecount++;
    }
    
    for(int i = 0;i < n;i++)
    {
        cin >> orange;
        if(b+orange >= s && b+orange <= t)orangecount++;
    }
    cout << applecount <<endl<< orangecount << endl;
    return 0;
}
