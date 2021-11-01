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
		cin>>a[i]; 	
	}
	for (int i=0;i<n;i++)
	{
		y=(a[i]/10)*10;
		z=y+5;
		t=y+10;
		if(z-a[i]<3&&z>a[i]&&a[i]>35)
		{
			a[i]=z;
		}
		else if(t-a[i]<3&&t>a[i]&&a[i]>35)
		{
			a[i]=t;
		}
	}
	for  (i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
