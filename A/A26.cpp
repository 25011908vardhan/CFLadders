#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],p=0,q=0,r=0;
    vector<int> x,y,z;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1) {p++;
        x.push_back(i);}
        else if(a[i]==2) {q++;
        y.push_back(i);}
        else {r++;
        z.push_back(i);}
    }
    int m=min({p,q,r}),i=0;
    cout<<m<<endl;
    while(i<m)
    {
        cout<<x[i]+1<<" "<<y[i]+1<<" "<<z[i]+1<<endl;
        i++;
    }
    return 0;
}