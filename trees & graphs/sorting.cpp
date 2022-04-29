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
  

///BUGLIFE-A Bug's Life (spoj problems)

// vi arr[2001];
// int vis[2001],col[2001];

// void dfs(int node,int d){
// 	vis[node]=1;
// 	dist[node]=d;
// 	for(auto i:arr[node]){
// 		if(!vis[i])
// 			dfs(i,dist[node]+1);
// 	}
// }

// bool dfs(int node,int c){
// 	vis[node]=1;
// 	col[node]=c;
// 	for(int i:arr[node]){
// 		if(!vis[i]){
// 			bool res=dfs(i,c^1);
// 			if(!res)
// 				return false;
// 		}
// 		else
// 			if(col[node]==col[i])
// 				return false;
// 	}
// 	return true;
// }

int main(){
	fastio;

	// fastio;  
	// int n,m,t,a,b;cin>>t;
	// while(t--){
	// 	cin>>n>>m;
	// 	for(int i=1;i<=n;i++)arr[i].clear(),vis[i]=0;
	// 	for(int i=1;i<=m;i++)
	// 		cin>>a>>b,arr[a].pb(b),arr[b].pb(a);
	// 	bool flag=true;
	// 	for(int i=1;i<=n;i++)
	// 	if(!vis[i]){
	// 		bool res=dfs(i,0);
	// 		if(!res)flag=false;
	// 	}
	// 	cout<<"scenario #"<<t<<":"<<endl;
	// 	if(flag)cout<<"no suspicious bugs found"<<endl;
	// 	else cout<<"suspicious bugs found"<<endl;
	// }

		int t;cin>>t;while(t--){
		int n,x;cin>>n>>x;
		int arr[n];
		int sum=0;
		for(int i=1;i<=n-1;i++){
			arr[i]=i;sum+=i;
			if(sum>=500)
				arr[i]=-1*i;
		}
		arr[n]=sum-n*x;
		for(int i=1;i<=n;i++){cout<<arr[i]<<" ";}
	}
	

}


