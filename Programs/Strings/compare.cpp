#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "xyz";

    if(!s1.compare(s2))
        cout<<"Strings are equal. \n";
    else
        cout<<"Strings are not equal. \n";

    //sorting a string
    string s = "diycsidcbscjaocba";
    sort(s.begin(), s.end());
    cout<<s<<endl;

    return 0;
}