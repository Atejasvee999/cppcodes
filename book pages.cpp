#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,j,k,sum=0,x=0,y,z,p,t,n;
    double ans=0.0;
      vector<lli> v;
    cin>>n;
    cin>>t;
    if(n%2==0)
    {
        if(t<=n/2)
        {
            ans=(t/2)-1;
        }
        else
        {
            ans=(n-t)/2;
        }
    }
    else if (n%2!=0)
    {
        if(t>=(n/2)+1)
        {
            ans=(n-t)/2;
        }
        else
        {
            ans=t/2;
        }
    }
    cout<<;
    return 0;
}
