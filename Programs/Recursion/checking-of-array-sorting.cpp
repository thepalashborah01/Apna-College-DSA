//strictly increasing
#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n == 1)
        return true;
    bool restArray = sorted(arr+1, n-1);
    return (arr[0] < arr[1] && restArray);
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<sorted(a, n);
    return 0;
}