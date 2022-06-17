#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   if(n==1||n==2) {cout<<n<<endl; return 0;}
   int curr=2,ans=0;
   for(int i=2;i<n;i++)
   {
    if(a[i]==a[i-1]+a[i-2])curr++;
    else{
    ans=max(ans,curr);
    curr=2;
    }
   }
   ans=max(ans,curr);
    cout<<ans<<endl;
    return 0;
}