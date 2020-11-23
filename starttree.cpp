#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define vi vector<int>:
#define umap unordered_map
using namespace std;
int maxmseq(int a[],int n)
{
  		int prev=-1,m=0;
		for(int i=1;i<=n;i++)
		{
			if(prev!=a[i])
			{
				prev=a[i];
				m++;
			}

		}
		return m;
}
int main()
{
	int t;cin>>t;while(t--)
	{
		int n,q;cin>>n>>q;
		int a[n];for(int i=1;i<=n;i++){cin>>a[i];}
		while(q--)
		{
			int x,y;cin>>x>>y;
			a[x]=y;
			cout<<maxmseq(a,n)<<endl;

		}
			  
	}
}