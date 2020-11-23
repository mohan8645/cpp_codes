#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
int main()
{
	fastio;
	int t;cin>>t;while(t--)
	{
		ll cnt=0;
		string a,b;cin>>a>>b;
		ll n=a.size();
		vector<ll> v(a.size(),-1);
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j+=2)
			{
				bool flag=1;
				if(a[j]!=b[j] && v[j]==-1)
				{
					v[j]=1;
					if(flag==1)
					{
						cnt++;
						flag=0;
					}

				}
				else if(a[j]==b[j] && v[j]==-1)
					v[j]=0;
			}
		}
		cout<<cnt<<endl;
	}
}