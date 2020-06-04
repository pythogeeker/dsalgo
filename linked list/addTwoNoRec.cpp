#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* addSameSize(node *head1, node* head2, node** result);
void addList(node *head1, node* head2, node** result);
void addCarryToReamining(node* head, node* cur, int *carry, node** result);
void swapPointer(node *p1, node *p2);
int getSize(node *head);
void push(node* head, int data);
void printList(node *head);
int main() {

}

