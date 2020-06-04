//the input is given in reverse form also the addition is performed in reverse form

#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;

};

node * newNode(int data) {
	node * temp = new node();
	temp->data = data;
	temp->next = NULL;
	return temp;
}
node *addTwoLists(node *first , node* second) {
	node *finalHead = NULL;
	node *temp, *prev = NULL;
	int sum, carry = 0;
	while (first || second) {
		sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
		carry = (sum >= 10) ? 1 : 0;
		sum = sum % 10;
		temp = newNode(sum);
		if (!finalHead)
			finalHead = temp;

		else
			prev->next = temp;

		prev = temp;
		if (first)
			first = first->next;
		if (second)
			second = second->next;
	}
	if (carry > 0)
		prev->next = newNode(carry);
	return finalHead;

}

node *reverse(node * head) {
	node *curr, *prev, *after;
	curr = head;
	prev = NULL;
	while (curr) {
		after = curr->next;
		curr->next = prev;
		prev = curr;
		curr = after;
	}
	return prev;
}

void printlist(node * head) {
	node *temp = head;
	while (temp) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
void printReverse(node *head) {
	if (!head)
		return;
	printReverse(head->next);
	cout << head->data << " ";
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	node *head1 = newNode(1);
	head1->next = newNode(9);
	head1->next->next = newNode(9);
	head1->next->next->next = newNode(9);

	node *head2 = newNode(1);
	head2->next = newNode(9);
	head2->next->next = newNode(9);
	head2->next->next->next = newNode(9);

	cout << "List 1 is" << endl;
	printReverse(head1);

	cout << "List 2 is" << endl;
	printReverse(head2);

	node* sumList = addTwoLists(head1, head2);

	cout << endl;
	printReverse(sumList);

}