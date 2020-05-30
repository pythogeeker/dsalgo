#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;
};
int detectLoop(struct node *head) {
	bool flag = false;
	node *slow = head, *fast = head;
	for (; slow && fast && fast->next ; ) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			flag = true;
			break;
		}
	}
	if (flag)
		for (slow = head; slow != fast ; slow = slow->next, fast = fast->next);
	return slow->data;
	return -1;
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

	//printList(&head);
	cout << head->next->next->next->data << " " << head->next->data << " ";
	head->next->next->next = head->next;
	cout << detectLoop(head) << endl;
	return 0;
}