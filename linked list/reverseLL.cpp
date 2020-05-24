#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

void reverseList(struct node **head) {
	struct node * nextptr, *currptr, *prevptr;
	currptr = *head;
	prevptr = NULL;
	while (nextptr) {
		nextptr = currptr->next;
		currptr->next = prevptr;
		prevptr = currptr;
		currptr = nextptr;
	}
	*head = prevptr;
}

void insert(struct node **head, int data) {
	struct node *newNode = new node();
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

void printList(struct node **head) {
	if (*head == NULL)
	{
		cout << "empty " << endl;
	}
	for (struct node *temp = *head; temp; temp = temp->next)
		cout << temp->data << " ";
	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	struct node *head = NULL;
	insert(&head, 5);
	insert(&head, 6);
	insert(&head, 7);
	insert(&head, 8);
	insert(&head, 9);
	insert(&head, 10);
	printList(&head);
	reverseList(&head);
	printList(&head);
	return 0;
}