#include<bits/stdc++.h>
using namespace std;

int numofone(int n)
{
    int count = 0;
    while(n)
    {
        n = n & n-1;
        count++;
    }
    return count;
}
int main()
{
    cout<<numofone(19); //answer should be 3
    return 0;
}