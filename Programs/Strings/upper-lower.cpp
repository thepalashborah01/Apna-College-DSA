#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "aciicnanc";
    transform(str.begin(), str.end(), str.begin(), :: toupper);   //tolower is we want to convert it to lower case

    cout<<str<<endl;

    return 0;
}