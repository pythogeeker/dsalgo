//FLOYD CYCLE FINDING ALGORITHM
#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

void insert(struct node **head, int data) {
	struct node *newNode = new node();
	newNode->data = data;
	newNode->next = NULL;
	if (head == NULL) {
		*head = newNode;
		cout << data << " is inserted at " << newNode << endl;
		return ;
	}
	node *temp = *head;
	while (temp->next) {
		temp = temp->next;
	}
	temp->next = newNode;
	cout << data << " is inserted at " << newNode << endl;
}
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

	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/
	string str1, str2;
	cin >> str1 >> str2;
	cout << str1 << " " << str2 << endl;
	struct node *head1 = NULL;

	for (int i = 0; i < str1.length(); i++)
		insert(&head1, int(str1[i]));

	struct node *head2 = NULL;

	for (int i = 0; i < str2.length(); i++)
		insert(&head2, int(str2[i]));
	printList(&head1);
	printList(&head2);
	//reverseList(&head1);
	//reverseList(&head2);
	printList(&head1);
	printList(&head2);





	return 0;
}