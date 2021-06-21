#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	vector<int>ans;
    stringstream ss(str);
    
    int temp;
    char ch;
    
    while(ss >> temp)
    {
        ans.push_back(temp);
        ss >>ch;
    }
    return ans;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
