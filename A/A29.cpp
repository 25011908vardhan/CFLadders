#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int a,w=0;
    for(int i=0;i<n;i++) {cin>>a;
    if(a>h) w+=2;
    else w++;
    }
    cout<<w<<endl;
    return 0;
}