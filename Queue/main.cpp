#include<iostream>
#include "myqueue.h"
using namespace std;

int main(){

	Queue<int> MyQueue;
	cout << "The queue has been ";

	if(MyQueue.empty())
		cout << "correctly initialized " << endl << endl;
	else
		cout << "incorrectly initialized " << endl << endl;

	cout << "Let's push the numbers from 1 up to 5" << endl;
	for(int i = 1; i <= 5; i++)
		MyQueue.push(i);

	cout << "Now the queue has " << MyQueue.size() << " elements " << endl;
	cout << "The front of the queue is " << MyQueue.front() << endl;
	cout << "The back of the queue is " << MyQueue.back() << endl << endl;
	cout << "Now let's pop elements from the queue so that we remain with 3 elements" << endl;

	int aux;
	while(MyQueue.size() != 3){
		cout << "I erased the element " << MyQueue.front() << endl;
		cout << "The back of the queue is " << MyQueue.back() << endl;
		MyQueue.pop();
	}

	cout << "\nNow the queue has " << MyQueue.size() << " elements " << endl;
	cout << "The front of the queue is " << MyQueue.front() << endl;
	cout << "The back of the queue is " << MyQueue.back() << endl << endl;
	cout << "Let's add to the queue the numbers from 10 up to 15 " << endl;

	for(int i = 10; i <= 15; i++)
		MyQueue.push(i);

	cout << "Now the queue has " << MyQueue.size() << " elements " << endl;
	cout << "The front of the queue is " << MyQueue.front() << endl;
	cout << "The back of the queue is " << MyQueue.back() << endl << endl;
	cout << "Now let's pop all the elements from the stack till it is empty" << endl;

	while(!MyQueue.empty()){
		cout << "I erased the element " << MyQueue.front() << endl;
		cout << "The back of the queue is " << MyQueue.back() << endl;
		MyQueue.pop();
	}

	cout << "\nNow the queue has " << MyQueue.size() << " elements " << endl;

	cout << "If we try to see the front or the back we will get an error " << endl;
	MyQueue.front();

	return 0;
}