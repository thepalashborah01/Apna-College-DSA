//using xor bitwise operator
#include<bits/stdc++.h>
using namespace std;

int oneunique(int arr[], int n)
{
    int xorsum = 0;
    for(int i=0; i<n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int setBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}
void twounique(int arr[], int n)
{
    int xorsum = 0;
    for(int i=0; i<n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    int tempxor = xorsum;
    int pos = 0;
    int setbit = 0;
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int secondxor = 0;
    for(int i=0; i<n; i++)
    {
        if(setBit(arr[i], pos-1))
        {
            secondxor = secondxor^arr[i]; 
        }
    }
    cout<<secondxor<<" ";
    cout<<(tempxor^secondxor);
    cout<<endl;
}
int main()
{
    int n = 8;
    int arr[8] = {1,2,3,4,5,1,2,3};
    //cout<<oneunique(arr, n);
    twounique(arr, n);
    return 0;
}