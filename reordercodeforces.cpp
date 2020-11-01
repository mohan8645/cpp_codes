#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define vi vector<int>
using namespace std;
int main()
{
	fastio;
	int t;cin>>t;while(t--)
	{
		int n,a,m;cin>>n>>m;
		for(int i=1;i<=n;i++)
		{	cin>>a;
			m-=a;

		}
		if(!m)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;



	}
	return 0;
}