#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n==0) cout<<"S"<<endl;
    else if(n==1) cout<<"M"<<endl;
    else if(n==2) cout<<"L"<<endl;
    else if(n==3) cout<<"XL"<<endl;
    else cout<<"XXL"<<endl;
}
int main()
{
    int a[20];
    memset(a,0,sizeof(a));
    for(int i=10;i<15;i++) cin>>a[i];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        string s;
        cin>>s;
        int n;
        if(s=="S") n=0;
        else if(s=="M") n=1;
        else n= s.size()+1;
        n+=10;
        for(int i=0;i<5;i++)
        {
            if(a[n+i]>0){
                a[n+i]--;
                print(n+i-10);
                break;
            }
            else if(a[n-i]>0)
            {
                a[n-i]--;
                print(n-i-10);
                break;
            }
        }
    }
    return 0;
}