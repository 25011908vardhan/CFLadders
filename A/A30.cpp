#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A') {a++;
        if(a>n-i-1+b) {cout<<"Anton"<<endl;
        return 0;}
        }
        else {
            b++;
            if(b>n-1-i+a){
                cout<<"Danik"<<endl;
                return 0;
            }
        }
        
    }
    cout<<"Friendship"<<endl;
    return 0;
}