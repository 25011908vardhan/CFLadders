#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    if(n==2||n==3) {
        cout<<s;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
        if(i%2){
        if(n%2&&i<=n-3) cout<<"-";
        else if(n%2==0&&i<=n-2) cout<<"-";}
    }

    return 0;
}