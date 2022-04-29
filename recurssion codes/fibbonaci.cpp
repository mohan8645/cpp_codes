#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll unsigned long long int
#define vi vector<int>
#define pb push_back
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	fastio;
	int n;cin>>n;
		ll a[n];
	a[0]=0;a[1]=1;a[2]=1;
	for(ll i=3;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	ll c;cin>>c;
	for(ll i=0;i<=c;i++)
	{
		cout<<a[i]<<" ";
	}
}