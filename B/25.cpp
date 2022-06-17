#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    multiset<int,greater<int>>maxi;
    multiset<int>mini;
    for(int i=0;i<m;i++){cin>>a[i];
    maxi.insert(a[i]);
    mini.insert(a[i]);
    }
    int high=0,low=0;
    for(int i=0;i<n;i++)
    {
        int x=*maxi.begin();
        high+=x;
        maxi.erase(maxi.begin());
        --x;
        if(x>0) maxi.insert(x);
    }
    for(int i=0;i<n;i++)
    {
        int x=*mini.begin();
        low+=x;
        mini.erase(mini.begin());
        --x;
        if(x>0) mini.insert(x);
    }
    cout<<high<<" "<<low<<endl;

    return 0;
}