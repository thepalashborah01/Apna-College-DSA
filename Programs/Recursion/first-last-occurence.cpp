#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if(i == n)
        return -1;
    if(arr[i] == key)
        return i;

    return firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key)
{
    if(i == n)
        return i;
    int restArray = lastocc(arr, n, i+1, key);
    if(restArray!=-1)
        return restArray;
    if(arr[i]==key)
        return i;
    return -1;
}
int main()
{   
    int a[5] = {2, 5, 3, 2, 9};
    cout<<firstocc(a, 5, 0, 2)<<endl;
    cout<<lastocc(a, 5, 0, 2)<<endl;
    return 0;
}