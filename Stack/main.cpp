#include "mystack.h"
#include<iostream>
using namespace std;

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