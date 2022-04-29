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

	// int n;cin>>n;
	// int root;cin>>root;
	// int vis[20]={0};
	// int a,b,m=n-1;
	// while(m--){
	// 	cin>>a>>b;
	// 	ar[a].pb(b);
	// 	ar[b].pb(a);
	// }
	// int cc_count=0;
	// for(int i=1;i<=n;i++){
	// 	if(!vis[i]){
	// 		dfs(i,vis);
	// 		cc_count++;
	// 	}
	// }
	// cout<<"Number of connected components"<<cc_count<<endl;

	// dfs(root,vis);

	// solve();

	
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


// void solve(){   //bfs(graph theory)
// 	vi vt[1005];
// 	int n;cin>>n;
// 	for(int i=0;i<n-1;i++){
// 		int x,y;cin>>x>>y;
// 		vt[x].pb(y);vt[y].pb(x);
// 	}
// 	queue<int> q;
// 	int root;cin>>root;
// 	q.push(root);
// 	int vis[n+1]={0};
// 	vis[root]=1;
// 	while(!q.empty()){
// 		int nc=q.size();
// 		for(int i=0;i<nc;i++){
// 			int f=q.front();
// 			q.pop();
// 			cout<<f<<" ";
// 			for(auto i:vt[f]){
// 				if(!vis[i]){
// 					q.push(i);
// 					vis[i]=1;
// 				}
// 			}
// 		}
// 		cout<<endl;
// 	}
// }

// void solve()    //codeforces problem-dragons
// {

// 	int n, total;cin>>total>>n;
// 	vector<pair<int,int>> vp(n);
// 	for(int i=0;i<n;i++)
// 	{
// 		int x,y;cin>>x>>y;
// 		vp[i]= {x,y};
// 	}
// 	sort(vp.begin(),vp.end(),[](const pair<int,int> &a,const pair<int,int> &b)
// 		{
// 			if(a.first==b.first)return a.second>b.second;
// 			return a.first<b.first;
// 		};);

// 		for(int i=0;i<n;i++)
// 		{
// 			if(vp[i].first>=total)
// 			{
// 				cout<<"NO\n";
// 				return;
// 			}
// 			total+=vp[i].second;
// 		}
// 		cout<<"YES\n";

// }
// vi ar[1005];
// void dfs(int v,int *vis){
// 	vis[v]=1;
// 	cout<<v<<"->";
// 	for(auto i:ar[v]){
// 		if(!vis[i]){
// 			dfs(i,vis);
// 		}
// 	}

// }