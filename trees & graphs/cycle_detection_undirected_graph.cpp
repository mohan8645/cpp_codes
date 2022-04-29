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
#define mod 1000000007
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
 
vi arr[100001];
int vis[100001]={0};
// int cc_size;

// void dfs(int node){
// 	vis[node]=1;
// 	cc_size++;
// 	for(auto i:arr[node]){
// 		if(!vis[i]){
// 			dfs(i);
// 		}
// 	}
// }
bool dfs(int node,int parent){
	vis[node]=1;
	for(int i:arr[node]){
		if(!vis[i]){
			if(dfs(i,node)==true)return true;

		}
		else
		if(i!=parent)return true;
	}
	return false;
}

int32_t main(){
	fastio;
	int m,n,a,b;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		arr[a].pb(b);
		arr[b].pb(a);
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			if(dfs(i,0)){
				cout<<"YES"<<endl;
				return 0;}

		}
	}
	cout<<"NO"<<endl;

}
