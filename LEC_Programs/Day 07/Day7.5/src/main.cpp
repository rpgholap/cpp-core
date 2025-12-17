//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Node{
	int data;
	Node* next;

public:
	Node(int d) : data(d), next(nullptr){

	}

	friend class LinkedList; 	// whole access
};

class LinkedList{
	Node* head;

public:

	LinkedList(Node* h) : head(h) {

	}

//	insert(){
//	code for insertion
//	}

	void display(){
		Node* temp = head;
		while(temp != nullptr){
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	~ LinkedList(){
		// code for deletion
	}

};

int main() {

	Node head(10);
	LinkedList list(&head);

	list.display();

	return 0;
}
