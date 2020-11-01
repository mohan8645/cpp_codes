 //Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll unsigned long long
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vvi vector<vi>
#define umap unordered_map
using namespace std;
int main()
{
    //int t;cin>>t;while(t--){
        int n,k;cin>>n>>k;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(!x%k)
                cnt++;
        }   
        cout<<cnt<<endl;
}
