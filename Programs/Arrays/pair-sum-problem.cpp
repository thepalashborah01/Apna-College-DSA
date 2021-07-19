//input array is in sorted order
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int key;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>key;

    int start = 0, end = n-1;
    while(start<end)
    {
        if(a[start]+a[end] == key)
        {
            cout<<start<<" "<<end<<endl;
            return true;
        }
        else if(a[start]+a[end] < key)
            start++;
        else
            end--;
    }
    return false;
}