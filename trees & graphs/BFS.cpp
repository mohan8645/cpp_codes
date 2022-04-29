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
// vi arr[10005];
// int vis[10001];
// void dfs(int node){
// 	vis[node]=1;
// 	for(auto i:arr[node]){
// 		if(!vis[i]){
// 			dfs(i);
// 		}
// 	}
// }

void solve(){   //bfs(graph theory)
	vi vt[1005];
	int n;cin>>n;
	for(int i=0;i<n-1;i++){
		int x,y;cin>>x>>y;
		vt[x].pb(y);vt[y].pb(x);
	}
	queue<int> q;
	int root;cin>>root;
	q.push(root);
	int vis[n+1]={0};
	vis[root]=1;
	while(!q.empty()){
		int nc=q.size();
		for(int i=0;i<nc;i++){
			int f=q.front();
			q.pop();
			cout<<f<<" ";
			for(auto i:vt[f]){
				if(!vis[i]){
					q.push(i);
					vis[i]=1;
				}
			}
		}
		cout<<endl;
	}
}
int main(){
	fastio;
	solve();
}
