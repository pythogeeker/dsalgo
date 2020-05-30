#include<iostream>
using namespace std;

void insert(struct node **head, int data);
struct node {
	int data;
	node *next;
};
struct node *newNode(int data)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}


int  getIntersectionNode(node *head1, node *head2) {
	node *temp1 = head1;
	node *temp2 = head2;
	int n1 = 0, n2 = 0;
	while (temp1->next) {
		temp1 = temp1-> next;
		n1++;
	}
	while (temp2->next) {
		temp2 = temp2->next;
		n2++;
	}
	int diff = abs(n2 - n1);
	temp1 = head1;
	temp2 = head2;
	for (int i = 0; i < diff; i++)
		temp1 = temp1->next;
	for (; temp1 != temp2; temp1 = temp1 -> next, temp2 = temp2->next);
	return temp1->data;

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


	struct node *head1 = newNode(10);
	head1->next = newNode(20);
	head1->next->next = newNode(30);
	head1->next->next->next = newNode(40);
	struct node *head2 = newNode(50);
	head2->next = head1->next->next;
	printf("%d", getIntersectionNode(head1, head2));
	return 0;
}
void insert(struct node **head, int data) {
	struct node *newNode = new node();
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}