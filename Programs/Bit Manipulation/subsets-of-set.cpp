#include<bits/stdc++.h>
using namespace std;

void subsets(int a[], int n)
{
    for(int i=0; i<(1<<n); i++) //1<<n represents 2 raise to the power n;
    {
        for(int j=0; j<n; j++)
        {
            if(i & (1<<j))
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{

    return 0;
}