#include "myforwardlist.h"
#include <iostream>
using namespace std;

template<class T>
ForwardList<T>::ForwardList(){
	sizeList = 0;
	head = NULL;
}

template<class T>
bool ForwardList<T>::empty(){
	if(head == NULL)
		return true;
	return false;
}

template <class T>
int ForwardList<T>::size(){
	return sizeList;
}

template <class T>
void ForwardList<T>::push_front(T const& value){
	node *Node = new node();
	Node->data = value;
	Node->next = head;
	head = Node;
	sizeList++;
}

template <class T>
T ForwardList<T>::pop_front(){
	if(head == NULL){
		cout << "Error: The ForwardList is empty" << endl;
		exit(0);
	}
	node *aux = head;
	T element = aux->data;
	head = aux->next;
	delete aux;
	sizeList--;
	return element;
}

template <class T>
void ForwardList<T>::insert(int position, T const& value){
	node *Node = new node();
	Node->data = value;
	if(position > sizeList){
		cout << "Error: The ForwardList has not such quantity of elements" << endl;
		exit(0);
	}
	if(position == 0){
		Node->next = head;
		head = Node;
	}else{
		int cont = 0;
		node *auxNode = head;
		while(cont < (position - 1)){
			auxNode = auxNode->next;
			cont++;
		}

		Node->next = auxNode->next;
		auxNode->next = Node;
	}
	sizeList++;
}

template <class T>
void ForwardList<T>::erase(int position){
	node *auxNode = head;
	if(position >= sizeList){
		cout << "Error: The ForwardList has not such quantity of elements" << endl;
		exit(0);
	}
	if(position == 0){
		head = auxNode->next;
		delete auxNode;
	}else{
		int cont = 0;
		while(cont < (position - 1)){
			auxNode = auxNode->next;
			cont++;
		}
		node *nodeDeleted = auxNode->next;
		auxNode->next = nodeDeleted->next;
		delete nodeDeleted;
	}
	sizeList--;
}

template <class T>
void ForwardList<T>::print_list(){
	int cont = 0;
	node *auxNode = head;
	while(auxNode != NULL){
		cout << "value: " << auxNode->data << " in position: " << cont << endl;
		auxNode = auxNode->next;
		cont++;
	}
}

template <class T>
void ForwardList<T>::remove(T const& value){
	node *auxNode = head;
	node *auxNextNode = auxNode->next;
	int cont = 0;
	while(auxNextNode != NULL){
		if(auxNode->data == value) this->erase(cont);	
		else cont++;
		auxNode = auxNextNode;
		auxNextNode = auxNextNode->next;
	}
	if(auxNode->data == value)
		this->erase(cont);
}

template <class T>
void ForwardList<T>::reverse(){
	node *prevNode = NULL;
	node *actualNode = head;

	while(actualNode != NULL){
		node *nextNode = actualNode->next;
		actualNode->next = prevNode;
		prevNode = actualNode;
		actualNode = nextNode;
	}

	head = prevNode;
}