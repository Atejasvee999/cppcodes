#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli i,j,k,sum=0,ans=0,x=0,y,n;
  	vector<lli> v;
    cin>>n;
    lli arr[n];
    lli even,odd,zero;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	if(arr[i]%2==0)
    	{
    		even++;
		}
		else if(arr[i]%2!=0)
		{
			odd++;
		}
		else
		{
			zero++;
		}
	}
    double p=even/n;
    double t=odd/n;
    double z=zero/n;
    cout<<p<<" "<<t<<" "<<z;
    
    
	
	return 0;
}

