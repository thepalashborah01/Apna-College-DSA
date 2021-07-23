//STL trick
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
int main()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(auto &i : arr)
    {
        cin>>i;
    }

    sort(arr.begin(), arr.end());

    do{
        ans.push_back(arr);
    }while(next_permutation(arr.begin(), arr.end()));

    for(auto v : ans)
    {
        for(auto i : v)
            cout<<i<<" ";
            cout<<"\n";
    }

    return 0;
}