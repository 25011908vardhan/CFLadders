#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>v(4,0),ans(4,0),letters(4,-1);//RGBY
    int ctr=0,n=s.length();
    int k=n-n%4;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R') 
        letters[0]=i%4;
        else if(s[i]=='B')
        letters[1]=i%4;
        else if(s[i]=='Y')
        letters[2]=i%4;
        else if(s[i]=='G')
        letters[3]=i%4;
        int f=0;
        for(int j=0;j<4;j++) if(letters[j]==-1) f=1;
        if(!f) break;
    }
    for(int i=0;i<n;i++)    
    {
            if(s[i]=='!')
            {
                for(int j=0;j<4;j++)
                {
                    if(letters[j]==i%4){
                        ans[j]++;
                    }
                }
            }
    }
    for(auto &it:ans) cout<<it<<" ";
    return 0;
}