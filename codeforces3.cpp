#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define umap unordered_map
using namespace std;
int main()
{
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		ll ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		umap<int,int> m;
		for(int i=0;i<n;i++)
		{
			m[ar[i]]++;
		}
		int y=max_element(m.begin(),m.end());
		if(m.size()==1)
			cout<<-1<<endl;
		else
			cout<<y<<endl;
	}
}