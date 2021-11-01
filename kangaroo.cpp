#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli i,j,k,sum=0,ans=0,x=0,x1,v1,x2,v2,n=0;
  	vector<lli> v;
    cin>>x1>>v1>>x2>>v2;
	if(x2>x1&&v2>v1)
	{
		cout<<"NO";
	}
	else if (x1>x2&&v1>v2)
	{
		cout<<"NO";
	}
	else
	{
	sum=x1+v1;
	ans=x2+v2;
	if(sum==ans)
	{
		cout<<"YES";
	}
	else{
	while (n=0)
	{
		sum=sum+v1;
		ans=ans+v2;
		if(sum==ans)
		{
			cout<<"YES";
			n--;
		}
	}
    }
    }
	return 0;
}
