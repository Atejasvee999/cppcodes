#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli i,j,k,sum=0,ans=0,p=0,d,m,n;
      vector<lli> v;
    cin>>n;
    lli a[n];
    for(i=0;i<m;i++)
    {
        cin>>a[i];     
    }
    cin>>d>>m;
    while(m==n)
    {
    for(i=p;i<m;i++)
    {
        sum=sum+a[i];
    }
    if(sum==d)
    {
        ans++;
    }
    p++;
    m++;
}
   cout<<ans;
            
    return 0;
}
