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

void alternatingSplit(node *head, node **head1, node **head2) {

	if (!head || !head->next)
		return;
	*head1 = head;
	*head2 = head->next;
	node *temp;
	while (head) {
		temp = head->next;
		head->next = temp ? temp->next : temp;
		head = temp;
	}

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
	node *head1 = NULL;
	node *head2 = NULL;
	printList(&head);
	alternatingSplit(head, &head1, &head2);
	printList(&head1);
	printList(&head2);

	return 0;
}