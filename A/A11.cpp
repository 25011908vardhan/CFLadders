#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x=0,y=0,z=0;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>t;
       if(i%3==1) x+=t;
       else if(i%3==2) y+=t;
       else z+=t;
   }
    int maxi=max(x,y);
    maxi=max(maxi,z);
    if(maxi==x) cout<<"chest"<<endl;
    else if(maxi==y) cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
    return 0;
}

/*
CF: Div-2, Problem A, 27th March 2022
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,ans=0;
    cin>>t;
    while(t--)
    {
            ans=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='0')
            {
                if(s[i+1]=='0') ans+=2;
                else if(i+2<n&&s[i+1]=='1'&&s[i+2]=='0') {ans++;
                i++;
                }
            }
        }cout<<ans<<endl;
    }
    return 0;
}*/