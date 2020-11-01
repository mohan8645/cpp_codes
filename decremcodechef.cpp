#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
int main()
{
	fastio;
	int t;cin>>t;while(t--){
	ll l,r;cin>>l>>r;
	if(r<2*l)
	{
		cout<<r<<endl;
	}
	else
	 	cout<<-1<<endl;
	}
}