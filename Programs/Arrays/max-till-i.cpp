//given an array a[] of size n.
//for every i form 0 to n-1, output max(a[0],a[1],a[2]...a[i])
//non-decreasing
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    for(int i=0; i<n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        cout<<maxNo<<" ";
    }
    return 0;
}
