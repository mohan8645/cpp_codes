#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define umap unordered_map
using namespace std;
int main()
{
	map<int,int> a;
	a.insert(pair<int,int>(1,10));
	a.insert(pair<int,int>(2,20));
	a.insert(pair<int,int>(3,30));
	a.insert(pair<int,int>(4,40));
	a.insert(pair<int,int>(5,50));
	a.insert(pair<int,int>(6,60));
	a.insert(pair<int,int>(7,70));
	a.insert(pair<int,int>(8,80));
	a.insert(pair<int,int>(9,90));

	map<int,int>::iterator itr;
	cout << "\nThe map a is : \n"; 
    cout << "\tKEY\tELEMENT\n";
	for(itr=a.begin();itr!=a.end();++itr)
	{
		cout<<'\t'<<itr->first<<'\t'<<itr->second<<endl;
	}	
	cout<<endl;
	// assigning the elements from a to a1 
	map<int,int>a1(a.begin(),a.end());
	cout<<"\nthe map a1 after"<<" assign  from a is: \n";
	cout<<"\tkey\tELEMENT\n";
	for(itr=a1.begin();itr!=a1.end();++itr)
	{
		cout<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';
	}
}