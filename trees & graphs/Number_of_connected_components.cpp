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
int vis[10001];
void dfs(int node){
	vis[node]=1;
	dist[node]=d;
	for(auto i:arr[node]){
		if(!vis[i]){
			dfs(i);
		}
	}
}
int main(){
	fastio; 

	int n,m;cin>>n>>m;
	int a,b;
	while(m--){
		cin>>a>>b;
		ar[a].pb(b);
		ar[b].pb(a);
	}
	int cc_count=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			cc_count++;
		}
	}
	cout<<"Number of connected components"<<cc_count<<endl;


}
