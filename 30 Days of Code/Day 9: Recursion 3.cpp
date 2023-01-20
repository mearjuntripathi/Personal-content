#include<bits/stdc++.h>
using namespace std;
int recursion(int);

int recursion(int n)
{
    if(n>=1)
    return (n*recursion(n-1));
    else
    return 1;
}

int main()
{
    int factorial,n;
    cin>>n;
   factorial=recursion(n);
   cout<<factorial<<endl;
}
