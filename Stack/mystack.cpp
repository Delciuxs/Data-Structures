#include "mystack.h"
#include<iostream>
using namespace std;

template<class T>
Stack<T>::Stack(){
	sizeStack = 0;
	topNode = new node();
	topNode->nextNode = NULL;
}

template<class T>
bool Stack<T>::empty(){
	if(topNode->nextNode == NULL)
		return true;
	return false;
}

template<class T>
int Stack<T>::size(){
	return sizeStack;
}

template<class T>
T Stack<T>::top(){
	if(topNode->nextNode == NULL){
		cout << "Error: The stack is empty" << endl;
		exit(0);
	}
	return topNode->data;
}

template<class T>
void Stack<T>::push(T const& element){
	node *Node = new node();
	Node->data = element;
	Node->nextNode = topNode;
	topNode = Node;
	sizeStack++;
}

template<class T>
void Stack<T>::pop(){
	node *auxNode = new node();
	auxNode = topNode;
	topNode = topNode->nextNode;
	delete auxNode;
	sizeStack--;
}
