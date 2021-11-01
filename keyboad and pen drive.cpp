#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli i,j,k,sum=0,ans=0,x=0,y,z,p,m,n;
  	vector<lli> v;
    cin>>y>>n>>m;
	lli key[n];
	lli pen[m];
	for(i=0;i<n;i++)
	{
		cin>>key[i]; 	
	}
	for (i=0;i<m;i++)
	{
		cin>>pen[m];
	}
	for(int i = 0; i < n; i++)
	{
        for(int j = 0; j < m; j++)
		{
            if(key[i]+pen[j] <= y)
			{
			sum = max(sum,key[i]+pen[j]);
		    }
        }
    }
    cout << sum << endl;				
	return 0;
}
