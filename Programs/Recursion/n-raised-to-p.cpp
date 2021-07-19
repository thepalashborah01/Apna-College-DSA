#include<bits/stdc++.h>
using namespace std;

int raiseto(int n, int p)
{
    if(p==0)
        return 1;
    
    return n * raiseto(n, p-1);
}
int main()
{
    int n, p;
    cin>>n>>p;
    cout<<raiseto(n, p);
    return 0;
}