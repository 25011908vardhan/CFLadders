#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        string s;
        cin>>n>>s;
        int f=0,ans=0,F=0;
        for(int i=0;i<n;i++) {if(s[i]=='I'){f=1;ans++;}
        if(s[i]=='F') F++;
        }
        if(f) {
            if(ans==1) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else cout<<n-F<<endl;

    return 0;
}