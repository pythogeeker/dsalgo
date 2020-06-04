#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;

};
//
node *addOneUtil(node *head);
node * newNode(int data) {
	node * temp = new node();
	temp->data = data;
	temp->next = NULL;
	return temp;
}

node *reverse(node *head) {
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
node *addOne(node *head) {
	head = reverse(head);
	head = addOneUtil(head);
	return reverse(head);
}
node *addOneUtil(node *head) {
	node *res = head;
	node *temp;
	int carry = 1, sum;
	while (head) {
		sum = head->data + carry;
		if (sum >= 10) {
			carry = 1;
			sum = sum % 10;
		}
		head->data = sum;
		temp = head;
		head = head->next;
	}
	if (carry > 0) {
		temp->next = newNode(1);
	}
	return res;

}
void printlist(node *head) {
	node *temp = head;
	while (temp) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	node *head = newNode(1);
	head->next = newNode(9);
	head->next->next = newNode(9);
	head->next->next->next = newNode(9);
	cout << "List is" << endl;
	printlist(head);
	addOne(head);
	cout << endl;
	printlist(head);

}