#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "7569237482";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s[0]<<endl;
    return 0;
}