#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli i,j,k,sum=0,ans=0,x=0,y,z,p=0,t,n,great;
  	vector<lli> v;
    cin>>n;
	lli a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	great=a[n-1];
	for (int i=0;i<n;i++)
	{
		if (a[i]>=great)
		{
			p++;
		}
	}
	cout<<p;
	return 0;
}
