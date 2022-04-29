#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
using namespace std;
template<typename T>
class Treenode{
public:
	T data;
	vector<Treenode *>children;
	Treenode(T data){
		this->data=data;
	}
};
void printT(Treenode<int > *root){
	if(root==NULL)
		return ;
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";

	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){
		printT(root->children[i]);
	}
}
Treenode<int> * takeInput()//taking input levelwise using queue
{
	int rootdata;cout<<"Enter root data"<<endl;
	cin>>rootdata;
	Treenode<int> * root=new Treenode<int>(rootdata);
	queue<Treenode<int> *>PendingNodes;
	PendingNodes.push(root);
	while(PendingNodes.size()!=0){
		Treenode<int> *front=PendingNodes.front();
		PendingNodes.pop();
		cout<<"Enter number of children of "<<front->data<<endl;
		int numchild;cin>>numchild;
		for(int i=0;i<numchild;i++){
			int childData;
			cout<<"Enter"<<i<<"th child of "<<front->data<<endl;
			cin>>childData;
			Treenode<int> *child=new Treenode<int>(childData);
			fornt->children.push_back(child);
			PendingNodes.push(child);
		}
	}
	return root;
}

Treenode<int> * Input(){
	int rootdata;cin>>rootdata;
	Treenode<int> *root=new Treenode<int>(rootdata);
	int n;cin>>n;
	for(int i=0;i<n;i++){
		Treenode<int> *child=Input();
		root->children.pb(child);
	}
	return root;
}
int main(){
	fastio;
	Treenode<int> *root= Input();
	printT(root);
}