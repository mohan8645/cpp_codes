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
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)
using namespace std;
int main()
{
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);

     fastio;
     /*int a,b,t;
     cin>>t;
     while(t--)
     {
     cin>>a>>b;
     int res=0;
     int d=(b-a+1);
     int f=1;
     for(int i=0;i<32;i++)
     {
        if(d > (f << i))
            continue;
        else
        {
            if((a & (f << i)) && (b & (f<< i)))
                res+=(f << i);
        }
     }
    cout<<res<<endl;
    }*/
    int x;cin>>x;
    ll ans=1;
    while(ans*2<=x)
    {
        ans*=2;
    }
    cout<<ans;
}
