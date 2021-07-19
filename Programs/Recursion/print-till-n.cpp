#include<bits/stdc++.h>
using namespace std;

void descending(int n)
{
    if(n==1)
    {
        cout<<"1";
        return;
    }
    cout<<n<<" ";
    descending(n-1); 
}

void ascending(int n)
{
    if(n==1)
    {
        cout<<"1 ";
        return;
    }
    ascending(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;cin>>n;
    ascending(n);
    cout<<endl;
    descending(n);
    return 0;
}   