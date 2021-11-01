#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli i,j,k,sum=0,ans=0,x=0,min=0,max=0,t,n;
	lli minimum,maximum;
  	vector<lli> v;
    cin>>n;
	lli a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	minimum=a[0];
	maximum=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>maximum)
		{
			maximum=a[i];
			max++;
		}
		else if(a[i]<minimum)
		{
			minimum=a[i];
			min++;
		}
	}
	cout<<max<<" "<<min;
			
	return 0;
}
