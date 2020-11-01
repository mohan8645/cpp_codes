#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
ll mod=1e9+7;

int main()
{
	fastio;
	int n,x,p;
	cin> >n>>x>>p;
	ll sum=1;
	ll max=n-x,min=x-1,l=0,r=n,i=(l+r)/2;
	while(l<r)
	{
		if(i>p)
		{
			sum=sum*max%mod;
			max--;
			r=i;
		}
		else if(i<p)
		{
			sum=sum*min%mod;
			min--;
			l=i+1;
		}
		else
		{
			l=i+1;
		}
		i=r+l;
		i=i/2;
	}
	for(int j=(min+max);j>0;j--)
	{
		sum=sum*j%mod;
	} 
	cout<<sum;
}
