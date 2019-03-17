#ifndef _MAXHEAP_
#define _MAXHEAP_
#include<vector>
using namespace std;

template <class T>
class MaxHeap{
	private:
		vector<T> arrTree;
		bool hasParent(int const&);
		bool hasLeftChild(int const&);
		bool hasRightChild(int const&);
		int getIndexParent(int const&);
		int getIndexLeftChild(int const&);
		int getIndexRightChild(int const&);
		T getParent(int const&);
		T getLeftChild(int const&);
		T getRightChild(int const&);
		void swap(int const&, int const&);
		void heapifyUp(int &);
		void heapifyDown(int &);
	public:
		T top();
		T pop();
		bool empty();
		void push(T const&);
		void make_heap(vector<T> &);
		void sort(vector<T> &);
};
#include "mymaxheap.cpp"
#endif
