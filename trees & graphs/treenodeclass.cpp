#include<bits/stdc++.h> 
#define vi vector<int>
#define vc vector<char>
#define pb push_back
using namespace std;
template <typename T>
class Treenode{
public:
	T data;
	vector<Treenode * >children;
	Treenode(T data){
		this->data=data;
	}
};

Treenode<int> * takeinput_levelwise(){
	int rootdata;
	cout<<"Enter the value of root"<<endl;
	cin>>rootdata;
	Treenode<int> *root=new Treenode<int>(rootdata);
	queue<Treenode<int> * >pendingnodes;
	pendingnodes.push(root);
	while(pendingnodes.size()!=0){
		Treenode<int> *front=pendingnodes.front();
		pendingnodes.pop();
		int numchild;
		cout<<"Enter number of children of "<<front->data<<endl;
		cin>>numchild;
		for(int i=0;i<numchild;i++){
			int childData;
			cout<<"Enter "<<i<<"th child of"<<front->data<<endl;
			cin>>childData;
			Treenode<int> *child=new Treenode<int>(childData);
			front->children.push_back(child);
			pendingnodes.push(child);
		}
	}
	return root;
}

// Treenode<int> * takeinput(){

// 	int rootdata;
// 	// cout<<"enter data"<<endl;
// 	cin>>rootdata;
// 	Treenode<int> *root=new Treenode<int>(rootdata);
// 	// cout<<"enter number of children"<<endl;
// 	int n;cin>>n;
// 	for(int i=0;i<n;i++){
// 		Treenode<int> *child=takeinput();
// 		root->children.push_back(child);
// 	}
// 	return root;
// }

void printTree_levelwise(Treenode<int> *root){
	if(root==NULL)
		return ;
	queue<Treenode<int> *> serve;
	serve.push(root);
	while(serve.size()!=0)
	{
		cout<<serve.pop()<<":";
		for(int i=0;i<root->children.size();i++){
			cout<<root->children[i]->data;
			serve.push(root->children[i]); 
		}
	}
}
void printTree(Treenode<int> *root){
	if(root==NULL)
		return;
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i< root->children.size();i++){
		printTree(root->children[i]);
	}
}
int main()
{
	// Treenode<int> * root= new Treenode<int>(1);
	// Treenode<int> * node1= new Treenode<int>(2);
	// Treenode<int> * node2= new Treenode<int>(3);
	// root->children.push_back(node1);
	// root->children.push_back(node2);
	Treenode<int> * root=takeinput_levelwise();
	printTree(root);
}