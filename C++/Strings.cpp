#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string a,b,c;
    cin>>a>>b;
    char ch1,ch2;
    
    int len_a = a.size();
    int len_b = b.size();
    
    c = a + b;
    
    ch1 = b[0];
    ch2 = a[0];
    a[0]= ch1;
    b[0]= ch2; 
    
    cout<<len_a<<" "<<len_b<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b;
  
    return 0;
}
