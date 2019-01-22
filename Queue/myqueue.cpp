#include "myqueue.h"
#include<iostream>
using namespace std;

template<class T>
Queue<T>::Queue(){
	frontQueue = NULL;
	backQueue = NULL;
	sizeQueue = 0;
}

template<class T>
bool Queue<T>::empty(){
	if(frontQueue == NULL)
		return true;
	return false;
}

template<class T>
int Queue<T>::size(){
	return sizeQueue;
}

template<class T>
T Queue<T>::front(){
	if(frontQueue == NULL){
		cout << "Error: The Queue is empty" << endl;
		exit(0);
	}
	return frontQueue->data;
}

template<class T>
T Queue<T>::back(){
	if(frontQueue == NULL){
		cout << "Error: The Queue is empty" << endl;
		exit(0);
	}
	return backQueue->data;
}

template<class T>
void Queue<T>::push(T const& element){
	node *Node = new node();
	Node->data = element;
	Node->nextNode = NULL;
	if(frontQueue == NULL)
		frontQueue = Node;
	else
		backQueue->nextNode = Node;
	backQueue = Node;
	sizeQueue++;
}

template<class T>
void Queue<T>::pop(){
	if(frontQueue == NULL){
		cout << "Error: The Queue is empty" << endl;
		exit(0);
	}
	node *auxNode = frontQueue;
	frontQueue = frontQueue->nextNode;
	delete auxNode;
	sizeQueue--;
}