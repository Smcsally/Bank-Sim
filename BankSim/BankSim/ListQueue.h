#include <iostream>
#include "Client.h"

using namespace std;

class ListQueue {
public:
	// make an empty list
	ListQueue();

	// delete the list
	~ListQueue();

	// copy constructor and operator=
	ListQueue(const ListQueue& other);
	ListQueue& operator=(const ListQueue& other);

	// add an element to the start
	void addAtStart(Client c);

	//add element to the queue
	void enqueue(Client c);

	//remove element from queue and return it
	Client dequeue();

	// add an element to the end
	void addAtEnd(Client c);

	// remove an element
	void remove(Client c);

	// print the list Forward
	void printForward() const;

	// print the list Backward
	void printBackward() const;


private:
	struct Node {
		Client c;
		Node* next;
		Node* prev;
	};

	Node* head;
	Node* tail;
};