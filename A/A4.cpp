#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    for(int i=n-1;i>=0;i--)
    {
        // cout<<".->"<<s[i]<<"-"<<i<<endl;
        if(!(s[i]==' ' || s[i]=='?'))
        {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
         cout<<"YES"<<endl;
         return 0;
        }
         else {
            //  cout<<".."<<s[i];
             cout<<"NO"<<endl;
            return 0;
         }
        }
    }
    return 0;
}