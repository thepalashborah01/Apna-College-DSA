#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aiaxsoqxnchqixascc";
    int freq[26];
    for(int i=0; i<26; i++)
        freq[i] = 0;
    for(int i=0; i<s.size(); i++)
        freq[s[i] - 'a']++;
    char ans = 'a';
    int max = 0;
    for(int i=0; i<26; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            ans = i+'a';
        }
    }
    cout<<ans<<" "<<max<<endl;
    return 0;
}   