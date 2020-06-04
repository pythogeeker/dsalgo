#include<iostream>
#include "TreeNode.h"
using namespace std;
//function simple print no surity
void printTree0(TreeNode<int>* root);
void printTree(TreeNode<int>* root);
void printAtLevelK(TreeNode<int>* root, int k);
int countLeaf(TreeNode<int>* root);
int sumNodes(TreeNode<int>* root);
node* takeInput();
node* takeInputLevelwise();
int heightOfTree(TreeNode<int>* root);
int maxData(TreeNode<int>* root);
int numNodes(TreeNode<int>* root);


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

//A USER INPUT FUNCTION 1 (Complicated)
//input 1 3 2 2 5 0 6 0 3 1 7 0 4 1 8 0

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

// A better input function
//input 1 3 2 3 4 2 5 6 1 7 1 8 0 0 0 0

TreeNode<int>* takeInputLevelwise() {
	int rootData;
	cout << "enter root data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;

	pendingNodes.push(root);

	while (pendingNodes.size() != 0) {
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		int n;
		cout << "enter no of children of" << front->data << endl;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int child;
			cout << "enter " << i << "th child of " << front->data << endl;
			cin >> child;
			TreeNode<int>* childNode = new TreeNode<int>(child);
			front->children.push_back(childNode);
			pendingNodes.push(childNode);
		}
	}
	return root;
}

//function to find count of nodes
int numNodes(TreeNode<int>* root) {
	if (root == NULL)
		return 0;
	int ans = 1;
	for (int i = 0; i < root->children.size(); i++) {
		ans += numNodes(root->children[i]);
	}
	return ans;
}

int countLeaf(TreeNode<int>* root) {
	if (root->children.size() == 0) {
		return 1;
	}
	int leafNum = 0;
	for (int i = 0; i < root->children.size(); i++) {
		leafNum += countLeaf(root->children[i]);
	}
	return leafNum;
}

int maxData(TreeNode<int>* root) {
	if (root == NULL)
		return 0;
	int max = root->data;
	for (int i = 0; i < root->children.size(); i++) {
		int submax = maxData(root->children[i]);
		if (max < submax)
			max = submax;
	}
	return max;

}
void printAtLevelK(TreeNode<int>* root, int k) {
	if (root == NULL)
		return ;
	if (k == 0)
		cout << root->data << " ";
	for (int i = 0; i < root->children.size(); i++) {
		printAtLevelK(root->children[i], k - 1);
	}
}
int sumNodes(TreeNode<int>* root) {
	if (root == NULL)
		return 0;
	int sum = root->data;
	for (int i = 0; i < root->children.size(); i++) {
		sum += sumNodes(root->children[i]);
	}
	return sum;
}

int heightOfTree(TreeNode<int>* root) {
	int maxHeight = 0;
	for (int i = 0; i < root->children.size(); i++) {
		maxHeight = max(maxHeight, heightOfTree(root->children[i]));
	}
	return maxHeight + 1 ;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	/*TreeNode<int > *root = new TreeNode<int>(1);
	TreeNode<int > *node1 = new TreeNode<int>(2);
	TreeNode<int > *node2 = new TreeNode<int>(3);
	root->children.push_back(node1);
	root->children.push_back(node2);
	*/
	TreeNode<int> * root = takeInputLevelwise();
	int k;
	cout << "Height of tree is" << endl;
	cout << heightOfTree(root) << endl;
	cout << "Number of nodes in tree" << endl;
	cout << numNodes(root) << endl;
	cout << "sum of nodes in tree" << endl;
	cout << sumNodes(root) << endl;
	cout << "max of nodes in tree" << endl;
	cout << maxData(root) << endl;
	cout << "No of leaf nodes" << endl;
	cout << countLeaf(root) << endl;
	cout << "print At level K enter level" << endl;
	cin >> k;
	printAtLevelK(root, k);
	cout << endl;
	cout << "1st print function" << endl;
	printTree0(root);
	cout << "2nd print function" << endl;
	printTree(root);

}