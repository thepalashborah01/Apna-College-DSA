#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    cin.ignore();

    char a[n+1];
    cin.getline(a, n);
    cin.ignore();

    int i=0;
    int curL = 0, maxL = 0;

    while(1)
    {
        if(a[i] == ' ' || a[i] == '\0')
        {
            if(curL > maxL)
                maxL = curL;
            curL = 0;
        }
        else
            curL++;

        if(a[i] == '\0')
            break;
        i++;
    }

    cout<<maxL<<endl;
    return 0;
}   