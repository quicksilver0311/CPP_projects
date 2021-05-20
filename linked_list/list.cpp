#include <cstdlib>
#include <iostream>

#include "list.h"

using namespace std;

List::List() {
	head=NULL;
	curr=NULL;
	temp=NULL;
}

void List::AddNode(int addData) {
	nodePtr n = new node;
	n->next = NULL;
	n->data = addData;


	if (head != NULL) {
		curr = head;
		while(curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = n;	
	}
	else {
		head = n;
	}
}

void List::DeleteNode(int delData) {
	curr = head;
	temp = head;
	while(curr != NULL && curr->data != delData) {
		temp = curr;
		curr = curr->next;
	}
	if(curr == NULL) {
		cout << delData << " was not in the list" << endl;
	}
	else {
		if(curr == head) {
			head = head->next;
			delete curr;
		}
		else {
			temp->next = curr->next;
			delete curr;
		}
		cout << "The value " << delData << " was deleted" << endl;	
	}
}

void List::PrintList() {
	curr = head;
	while(curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}
