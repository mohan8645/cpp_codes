#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll unsigned long long int
#define vi vetor<char>
#define vll vector<ll>
using namespace std;
int main()
{
	fastio;
	int t;cin>>t;while(t--){
		llb,m;cin>>n>>b>>m; 
		ll ans=0;
		while(n>0)
		{
			if(n&1){
				n=n/2+1;}
			else{
				n=n/2;}
				ans+=(n/2)*m;
				m=2*m;		
		}
		cout<<ans<<endl;

	}
}