#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

int kthNode(struct node **head, int k) {
	if (k < 0 || head == NULL)
		return -1;
	node *p, *q;
	p = q = *head;
	for (int count = 0; count < k; count++) {
		if (q == NULL)
			return -1;
		q = q->next;
	}
	while (q) {
		q = q->next;
		p = p->next;
	}
	return p ? p->data : -1;
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
	cout << kthNode(&head, 4) << endl;
	return 0;
}