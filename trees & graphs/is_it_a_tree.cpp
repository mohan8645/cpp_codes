#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define ii pair<int,int>
#define ull long long int
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define map unordered_map
#define pb push_back
#define endl "\n"
#define INF 1000000000
using namespace std;

vi arr[10005];
int vis[10005];

void dfs(int node){
	vis[node]=1;
	for(auto i:arr[node]){
		if(!vis[i])
			dfs(i);
	}
}

int main(){
	int n,m,a,b;cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		arr[a].pb(b);
		arr[b].pb(a);
	}
	int cc=0;
	for(int i=1;i<=n;i++)
		if(!vis[i])
			dfs(i),cc++;
	// cout<<cc<<endl;
	// cout<<n<<m<<endl;

	if(cc==1 && m==n-1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}