#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define vi vector<int>
using namespace std;
int main()
{
    int t;cin>>t;while(t--)
    {
        int n,m;cin>>n>>m;
        set<int> s;
        int a[n],b[m];for(int i=0;i<n;i++){cin>>a[i];s.insert(a[i]);}
        for(int i=0;i<m;i++){cin>>b[i];s.insert(b[i]);}
        	        vi v(n+m);
        auto it = set_intersection(a,a+n,b,b+m,v.begin());
        for (auto st =v.begin();st!=it;st++) 
         {
             cout<<*st<<" ";
         }
            cout<<endl;
        for(auto it=s.begin();it!=s.end();it++)
        {    cout<<*it<<" ";}
    }
    return 0;
}