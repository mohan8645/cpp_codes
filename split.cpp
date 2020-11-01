f#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define umap unordered_map
using namespace std;
int main()
{
fastio;
int t;cin>>t;while(t--){
int n;cin>>n;
string s;
cin>>s;
map<char, int> m;
for(int i=0;i<n;i++)
    m[s[i]]++;
if(m[s[n-1]]>1)
    cout<<"YES\n";
else cout<<"NO\n";




}return 0;
}

