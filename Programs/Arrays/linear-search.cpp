#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int x, int k)
{
    for(int i=0; i<x; i++)
    {
        if(arr[i] == k)
            return i;
    }
    return -1;
}
int main()
{
    int size;
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;
    int result = linearSearch(arr, size, key);
    
    cout<<result<<endl;
    return 0;
}