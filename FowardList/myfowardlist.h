#ifndef _FOWARDLIST_H_
#define _FOWARDLIST_H_

template <class T>
class FowardList{
	private:
		struct node{
			T data;
			node *next;
		}*head;
		int sizeList;
	public:
		FowardList();
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

#include "myfowardlist.cpp"
#endif