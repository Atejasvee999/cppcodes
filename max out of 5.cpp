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
	lli  arr[n];
    for (int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int j=1;j<n;j++)
	{
		sum=sum+arr[j];
		ans=ans+arr[j-1];
	}
	cout<<ans<<" "<<sum;
			
	return 0;
}
