//append means joining
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cout<<"Enter first string : ";
    getline(cin, s1);
    cout<<"Enter second string : ";
    getline(cin, s2);

    s1.append(s2);
    cout<<s1<<endl;
    //cout<<s1+s2<<endl;    this command also gives the same result
    return 0;
}