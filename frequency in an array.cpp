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
    cin>>k;
	lli a[k];
	for(i=0;i<k;i++)
	{
		cin>>a[i]; 	
	}
	}
	void countFreq(int a[], int n) 
	{ 
	int ans=0;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) { 
        if (visited[i] == true) 
            continue; 
        int count = 1; 
        for (int j = i + 1; j < n; j++) { 
            if (a[i] == a[j]) { 
                visited[j] = true; 
                count++; 
            } 
            if((count)%2==0)
            {
            	ans=count/2;
			}
			else if((count)%2!=0)
			{
				ans=(count-1)/2;
			}
            
        }
} 
cout<<ans;
}

