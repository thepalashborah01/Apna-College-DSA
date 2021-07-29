#include<bits/stdc++.h>
//#include<vector> is used as the header file
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    for(auto element : v)
        cout<<element<<" ";
    cout<<endl;

    v.pop_back(); //last element will get removed

    vector<int> v2(3, 50); //size,values

    swap(v, v2);
    for(auto element : v)
        cout<<element<<" ";
    cout<<endl;

    sort(v.begin(), v.end());

    
    return 0;
}