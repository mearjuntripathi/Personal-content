#include <bits/stdc++.h>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    /* Vector-Erase in C++ - Hacker Rank Solution START */
    vector<int> v ;
    int temp,i,j; 
    int n; 
    cin>>n;
    for(i =0 ; i<n ; i++)
    {
        cin>>temp; 
        v.push_back(temp);
    }
    int x, a, b;
    cin>>x;
    cin>>a>>b;
    v.erase (v.begin()+(x-1));
    v.erase(v.begin()+a-1 , v.begin()+b-1);
    cout << v.size() << endl;
    for(j =0 ; j< v.size() ; j++)
    {
        cout << v.at(j) << " " ;  
    }
    
    /* Vector-Erase in C++ - Hacker Rank Solution END */
return 0;
}
