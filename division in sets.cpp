#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli i,j,k,sum=0,ans=0,x=0,y,z,p,t,n;
  	vector<lli> v;
    cin>>n>>k;
	lli a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i]; 	
    }
    for(i=0;i<n;i++)
    {
    	for (j=i+1;j<n;j++)
    	{
    		if((a[i]+a[j])%k==0)
    		ans++;
		}
	}
	cout<<ans;
			
	return 0;
}
