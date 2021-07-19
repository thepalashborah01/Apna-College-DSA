#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch1 = s[0];
    string ans = removeDuplicate(s.substr(1));

    if(ch1 == ans[0])
    {
        return ans;
    }
    return (ch1+ans);
}
int main()
{
    cout<<removeDuplicate("aaaabbbccddeeeee");
    return 0;
}