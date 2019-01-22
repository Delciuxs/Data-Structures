#ifndef _QUEUE_H_
#define _QUEUE_H_

template<class T>
class Queue{
	private:
		struct node
		{
			T data;
			node *nextNode;
		}*frontQueue, *backQueue;
		int sizeQueue;
	public:
		Queue();
		bool empty();
		int size();
		T front();
		T back();
		void push(T const&);
		void pop();
};
#include "myqueue.cpp"
#endif