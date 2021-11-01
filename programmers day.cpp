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
	if(n<1918)
	{
		if(n%4==0)
		{
			cout<<"12.09."<<n;
		}
		else
		{
			cout<<"13.09."<<n;
		}
	}
	if(n>=1918)
	{
		if((n%400==0)or (n%4==0 and n%100!=0))
		{
			cout<<"12.09."<<n;
		}
		else
		{
			cout<<"13.09."<<n;
		}
	}
	
}
