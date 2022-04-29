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
int vis[10001],dist[10001];
void dfs(int node,int d){
	vis[node]=1;
	dist[node]=d;
	for(auto i:arr[node]){
		if(!vis[i]){
			dfs(i,dist[node]+1);
		}
	}
}

int main(){
	fastio; 
	
	int n,a,b;cin>>n;
	for(int i=1;i<=n-1;i++){
		cin>>a>>b;
		arr[a].pb(b);
		arr[b].pb(a);

	}
	dfs(1,0);
	int g,ans=-1,min_dist=INF;
	cin>>g;
	for(int i=0;i<g;g++){
		int g_city;cin>>g_city;
	if(dist[g_city]<min_dist)
		min_dist=dist[g_city],ans=g_city;
	else
	if(dist[g_city]==min_dist && g_city<ans)
		ans=g_city;
	}
	cout<<ans<<end;
}
