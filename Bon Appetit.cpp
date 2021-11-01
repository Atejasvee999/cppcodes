#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli i,j,k,ans=0,x=0,y,z,p,t,n;
	float sum=0.0;
  	vector<lli> v;
    cin>>n>>k;
	lli a[n];
	for(i=0;i<n;i++)
	{
		cin>>i;
		sum=sum+a[i];	
	}
	sum=(sum-a[k])/2;
	cin>>y;
    if(y>sum)
	{
		cout<<y-sum;
	}
	else
	{
		cout<<"Bon Appetit";
	}
			
}
