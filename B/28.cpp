#include<bits/stdc++.h>
using namespace std;
int main()
{
    
       int n,m;
       cin>>n>>m;
       int a[m];
       for(int i=0;i<m;i++) 
       cin>>a[i];
       sort(a,a+m);
       if(a[0]==1||a[m-1]==n) {cout<<"NO"<<endl;return 0;}
       int longest=1;
       for(int i=1;i<m;i++)
       {
        if(longest>2) {
            cout<<"NO"<<endl;
            return 0;
        }
        if(a[i]-a[i-1]==1)longest++;
        else longest=1;
        
       }
       if(longest>2) 
       cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    return 0;
}