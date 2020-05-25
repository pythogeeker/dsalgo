//FLOYD CYCLE FINDING ALGORITHM
#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;
};
int detectLoop(struct node *head) {

	node * slowptr, *fastptr;
	slowptr = fastptr = head;
	for (; slowptr && fastptr && fastptr->next ;) {
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
		if (slowptr == fastptr)
			return 1;
	}
	return 0;

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
	cout << detectLoop(head) << endl;
	return 0;
}