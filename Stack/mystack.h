#ifndef _STACK_H_
#define _STACK_H_

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
#include "mystack.cpp"
#endif