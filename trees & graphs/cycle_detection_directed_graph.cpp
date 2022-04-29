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
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
 
vi arr[10005];
int vis[10001];
// void dfs(int node){
// 	vis[node]=1;
// 	dist[node]=d;
// 	for(auto i:arr[node]){
// 		if(!vis[i]){
// 			dfs(i);
// 		}
// 	}
// }
bool dfs(int node){
	vis[node]=1;
	for(int i:arr[node]){
		if(!vis[i]){
			if(dfs(i))return true;
		}
		else
			if(vis[i]==1)return true;
	}
	vis[node]=2;
	return false;
}

int main(){
	fastio;  
	int n,m,a,b;
	cin>>n>>m;
	while(m--){
		cin>>a>>b;
		arr[a].pb(b);
	}
	cout<<"cycle status  "<<dfs(1)<<endl;

}
