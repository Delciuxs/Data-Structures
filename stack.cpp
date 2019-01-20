#include<iostream>
using namespace std;

template<class T>
class Stack{
	private:
		struct node
		{
			T data;
			node *nextNode;	
		}*topNode;
		int sizeStack;
	public:
		Stack();
		bool empty();
		int size();
		T top();
		void push(T const&);
		void pop();
};

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



int main(){

	Stack<int> MyStack;
	cout << "Your stack has been initialized ";

	if(MyStack.empty())
		cout << "correctly, and it is empty" << endl << endl;
	else
		cout << "incorrectly " << endl << endl;

	cout << "Let's push the numbers from 1 up to 5 " << endl;
	for(int i = 1; i <= 5; i++){
		MyStack.push(i);
	}

	cout << "So the stack has " << MyStack.size() << " elements" << endl;
	cout << "And the actual top of the stack is " << MyStack.top() << endl << endl;
	cout << "Now let's erase elements from the stack so that we remain with 3 elements" << endl;

	int aux;

	while(MyStack.size() != 3){
		aux = MyStack.top();
		MyStack.pop();
		cout << "I erased the element " << aux << endl;
	}

	cout << "So the stack has " << MyStack.size() << " elements" << endl;
	cout << "And the actual top of the stack is " << MyStack.top() << endl << endl;
	cout << "Let's add to the stack the numbers from 10 up to 15 " << endl;

	for(int i = 10; i <= 15; i++){
		MyStack.push(i);
	}

	cout << "So the stack has " << MyStack.size() << " elements" << endl;
	cout << "And the actual top of the stack is " << MyStack.top() << endl << endl;
	cout << "Now let's pop all the elements from the stack till it is empty" << endl;

	while(!MyStack.empty()){
		aux = MyStack.top();
		MyStack.pop();
		cout << "I erased the element " << aux << endl;
	}

	cout << "So the stack has " << MyStack.size() << " elements" << endl << endl;
	cout << "If we try to see the top we will get an error " << endl;
	MyStack.top();

	return 0;
}