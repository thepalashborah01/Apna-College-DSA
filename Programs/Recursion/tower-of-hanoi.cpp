#include<bits/stdc++.h>
using namespace std;

void towerofHanoi(int n, char source, char destination, char helper)
{
    if(n==0)
        return;
    
    towerofHanoi(n-1, source, helper, destination);
    cout<<"Move from "<<source<<" to "<<destination<<endl;
    towerofHanoi(n-1, helper, destination, source);

}
int main()
{
    towerofHanoi(4, 'a', 'c', 'b');
    return 0;
}