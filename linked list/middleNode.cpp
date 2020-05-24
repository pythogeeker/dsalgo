/*THREE APPROACHES
	1. TRAVERSE LIST AND FIND SIZE OF IT AND THEN TAKE CEIL OF SIZE/2
	2. WHILE TRAVERSING THE LIST STORE ALL THE ADDERESSES IN HASH TABLE
	3. TWO POINTER APPROACH
	*/
#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

int middleNode(struct node **head) {
	struct node *slowptr, *fastptr;
	slowptr = fastptr = *head;
	for (; slowptr && fastptr && fastptr->next ; slowptr = slowptr->next, fastptr = fastptr->next->next);
	return slowptr->data;
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
	cout << "middleNode is " << middleNode(&head) << endl;
	printList(&head);
	return 0;
}