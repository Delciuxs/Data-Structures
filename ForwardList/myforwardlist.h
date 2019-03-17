#ifndef _FORWARDLIST_H_
#define _FORWARDLIST_H_

template <class T>
class ForwardList{
	private:
		struct node{
			T data;
			node *next;
		}*head;
		int sizeList;
	public:
		ForwardList();
		void push_front(T const&);
		T pop_front();
		void insert(int position, T const&);
		void erase(int position);
		void reverse();
		void print_list();
		void remove(T const&);
		int size();
		bool empty();
};

#include "myforwardlist.cpp"
#endif