#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>v[i][j];
    int ans=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        if(v[i][j]=='P'){
            if(i-1>=0&&v[i-1][j]=='W'){
                v[i][j]='.';
                v[i-1][j]='.';
                ans++;
            }
        else if(j-1>=0&&v[i][j-1]=='W'){
                v[i][j]='.';
                v[i][j-1]='.';
                ans++;
            }
        else if(i+1<n&&v[i+1][j]=='W'){
                v[i][j]='.';
                v[i+1][j]='.';
                ans++;
            }
        else if(j+1<m&&v[i][j+1]=='W'){
                v[i][j]='.';
                v[i][j+1]='.';
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}