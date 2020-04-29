#include<iostream>
using namespace std;
//we have declarde node
class Node {
public:
	int data;
	Node *next;
};
//we have declared head pointer here
Node* head = NULL;
//insertion at beginning
void insert(int new_data)
{
	Node *  newnode = new Node();
	newnode->data = new_data;
	newnode->next = head;
	head = newnode;

}
//insertion at end
void append(int n)
{
	Node *newnode = new Node();
	newnode->data = n;
	newnode->next = NULL;
	if (head == NULL) {
		head = newnode;
		return;
	}
	Node *temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newnode;

}
//deletion of a particular node
void deleteNode(int n)
{
	Node *temp = head;
	if (temp->data == n)
	{
		head = temp->next;
		free(temp);
		return ;
	}
	Node* prev;
	while (temp->data != n && temp != NULL)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return ;
	prev->next = temp->next;
	free(temp);
}
//this fucntion is for prinitng the list
void printlist()
{
	if (head == NULL)
		cout << "empty" << endl;
	Node* temp = head;
	while (temp)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	append(5);
	append(6);
	append(7);
	printlist();
	deleteNode(6);
	cout << endl;
	append(5);
	append(6);
	append(7);
	printlist();
	return 0;

}