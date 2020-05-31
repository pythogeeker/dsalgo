#include<iostream>
#include "TreeNode.h"
using namespace std;
//function simple print no surity
void printTree0(TreeNode<int> *root) {

	cout << root->data << endl;
	for (int i = 0; i < root->children.size(); i++) {
		printTree0(root->children[i]);
	}
}

void printTree(TreeNode<int> *root) {
	//to handle null pointer exception edge case
	if (root == NULL)
		return ;
	cout << root->data << " : ";
	for (int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for (int i = 0; i < root->children.size(); i++) {
		printTree(root->children[i]);
	}
}
//A USER INPUT FUNCTION
TreeNode<int>* takeInput() {
	int rootData;
	cout << "enter root data" << endl;
	cin >> rootData;
	TreeNode<int> * root = new TreeNode<int>(rootData);

	int n;
	cout << "enter no of children of " << rootData << endl;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		TreeNode<int> *child = takeInput();
		root->children.push_back(child);
	}
	return root;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	TreeNode<int > *root = new TreeNode<int>(1);
	TreeNode<int > *node1 = new TreeNode<int>(2);
	TreeNode<int > *node2 = new TreeNode<int>(3);

	root->children.push_back(node1);
	root->children.push_back(node2);
	cout << "1st print function" << endl;
	printTree0(root);
	cout << "2nd print function" << endl;
	printTree(root);

}