#include<bits/stdc++.h>
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
	cout << "\nThe map gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n";
	for(int i=0;i<n;i++)
	{
		cout<<'\t'<<itr->first<<'\t'<<itr->second<<endl;
	}	
	cout<<endl;
}