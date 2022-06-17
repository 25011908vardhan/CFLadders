#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int w=0,d=0,l=0;
    if(a==b) {cout<<0<<" "<<6<<" "<<0<<endl;return 0;}
    int flag=0;
    if(a>b) {a=a+b;b=a-b;a=a-b;flag=1;}
        w+=a+(b-a-1)/2;
        if((b-a-1)%2!=0) d++;
        l=6-w-d;
    if(flag) cout<<l<<" "<<d<<" "<<w<<endl;
    else cout<<w<<" "<<d<<" "<<l<<endl;
    return 0;
}