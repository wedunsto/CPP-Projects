#include <iostream>
using namespace std;

class LinkedList{
	public:
		int data;//value in the memory address  
		LinkedList* next;//points to the next node in the linked list
};

LinkedList* addToTail (LinkedList* head, int newValue){//adds a node with the new value to the tail of the linked list
	LinkedList* newNode = new LinkedList();//creates a new node to hold the new value
	newNode -> data = newValue;//stores the new value in the new node
	if(head == NULL){//if the linked list is empty
		return newNode;//the new node is the head
	}
	LinkedList* placeHolder = head;//uses a place holder to traverse the linked list
	while(placeHolder -> next != NULL){//get to the tail of the linked list
		placeHolder = placeHolder->next;
	}
	placeHolder -> next = newNode;//the tail now points to the new node
	return head;
}

LinkedList* deleteFromTail(LinkedList* head){//delete the node from the tail
	if(head == NULL){//if the linked list is empty
		return NULL;//return empty head
	}
	LinkedList* placeHolder = head;//use a place holder to traverse the linked list
	while(placeHolder ->next->next != NULL){
		placeHolder = placeHolder -> next;
	}
	placeHolder -> next = NULL;//makes the node before the tail, the tail
	return head;
}

LinkedList* deleteFromHead(LinkedList* head){//remove the node from the head of the linked list
	if(head == NULL){//if linked list is empty
		return head;//return empty head
	}
	head = head -> next;//makes the next node the new node
	return head;
}

int sizeOfLinkedList(LinkedList* head){//returns the size of the linked list
	LinkedList* placeHolder = head;//creates a place holder to traverse the linked list
	int size=0;//holds the size of the linked list
	while(placeHolder != NULL){//traverse linked list
		size++;//increment size
		placeHolder = placeHolder -> next;
	}
	return size;
}

void printLinkedList(LinkedList* head){//prints out values in the linked list
	LinkedList* placeHolder = head;//use a place holder to traverse the linked list
	cout<<"Values in the linked list include: ";
	while(placeHolder != NULL){
		cout<<placeHolder->data<<", ";
		placeHolder = placeHolder->next;
	}
	cout<<endl;
}

int main(){
	LinkedList *head = new LinkedList();//creates the head of a linked list
	head -> data = 5;//assigns the value in the memory address of the pointer
	head = addToTail(head, 2);//adds node with the new value to the tail of the linked list
	head = addToTail(head, 10);
	head = deleteFromTail(head);//removes the tail from linked list
	head = deleteFromHead(head);//removes the head from linked list
	printLinkedList(head);
	cout<<"The size of the linked list is: "<<sizeOfLinkedList(head)<<endl;
	return 0;
}