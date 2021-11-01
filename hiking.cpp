#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli i,j,k,sum=0,ans=0,x=0,y=0,z,p,t,n;
  	vector<lli> v;
    cin>>n;
	char s[n];
	lli a[n];
	cin>>s[n];
	for (i=0;i<n;i++)
	{
		if(s[i]=='D')
		a[i]=-1;
		else
		a[i]=1;
	}
	for (i=y;i<n;i++)
	{
		sum=sum+a[i];
		if(sum==0)
		ans++;
	}
	cout<<ans;
	return 0;
}
