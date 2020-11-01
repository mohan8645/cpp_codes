	#include<bits/stdc++.h>
	#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	#define ll long long int
	using namespace std;
	int main()
	{
		fastio;
		int t;cin>>t;while(t--)
		{
			int n;cin>>n;
			ll a[n];for(int i=0;i<n;i++){cin>>a[i];}
			for(int l=1;l<n-2;l++)
			{
				int p=1,q=1;
				for(int i=0;i<l;i++)
				{	
					p*=a[i];
				}
				for(int i=n-1;i>=l;i--)
				{
					q*=a[i];
				}
				if(__gcd(p,q)==1)
					{cout<<l<<endl;break;}
			}
			
		}
		return 0;
	}