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
    cin>>n;
	lli a[n];
	for(i=0;i<n;i++)
	{
		cin>>y>>z>>p;
		if(abs(p-y)>abs(p-z))
		{
			cout<<"cat A";
		}
		else if(abs(p-y)<abs(p-z))
		{
			cout<<"cat B";
		}
		else
		{
			cout<<"mouse C";
		}
	}
	
	
	return 0;
}
