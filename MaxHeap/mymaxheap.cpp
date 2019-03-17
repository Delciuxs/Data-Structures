#include "mymaxheap.h"
#include<iostream>
using namespace std;
#include<vector>

template <class T>
int MaxHeap<T>::getIndexParent(int const& index){return ((index - 1) / 2);}

template <class T>
int MaxHeap<T>::getIndexLeftChild(int const& index){return ((index * 2) + 1);}

template <class T>
int MaxHeap<T>::getIndexRightChild(int const& index){return ((index * 2) + 2);}

template <class T>
T MaxHeap<T>::getParent(int const& index){return arrTree[getIndexParent(index)];}

template <class T>
T MaxHeap<T>::getLeftChild(int const& index){return arrTree[getIndexLeftChild(index)];}

template <class T>
T MaxHeap<T>::getRightChild(int const& index){return arrTree[getIndexRightChild(index)];}

template <class T>
bool MaxHeap<T>::hasParent(int const& index){
	if(getIndexParent(index) >= 0) return true;
	return false;
}

template <class T>
bool MaxHeap<T>::hasLeftChild(int const& index){
	int tamArrTree = arrTree.size();
	if(getIndexLeftChild(index) <= (tamArrTree - 1)) return true;
	return false;
}

template <class T>
bool MaxHeap<T>::hasRightChild(int const& index){
	int tamArrTree = arrTree.size();
	if(getIndexRightChild(index) <= (tamArrTree - 1)) return true;
	return false;
}

template <class T>
void MaxHeap<T>::swap(int const& index1, int const& index2){
	int temp = arrTree[index1];
	arrTree[index1] = arrTree[index2];
	arrTree[index2] = temp;
}

template <class T>
void MaxHeap<T>::heapifyUp(int &index){
	while((hasParent(index)) && (getParent(index) < arrTree[index])){
		swap(getIndexParent(index), index);
		index = getIndexParent(index);
	}
}

template <class T>
void MaxHeap<T>::heapifyDown(int &index){
	while(hasLeftChild(index)){
		int biggerChildIndex = getIndexLeftChild(index);
		if((hasRightChild(index)) && (getRightChild(index) > getLeftChild(index)))
			biggerChildIndex = getIndexRightChild(index);
		if(arrTree[biggerChildIndex] > arrTree[index])
			swap(biggerChildIndex, index);
		else
			break;
		index = biggerChildIndex;
	}
}

template <class T>
T MaxHeap<T>::top(){
	if(arrTree.size() == 0){
		cout << "Error: The heap is empty " << endl;
		exit(1);
	}else return arrTree[0];
}

template <class T>
T MaxHeap<T>::pop(){
	if(arrTree.size() == 0){
		cout << "Error: The heap is empty " << endl;
		exit(1);
	}
	int index = 0;
	int aux = arrTree[index];
	arrTree[index] = arrTree[arrTree.size() - 1];
	arrTree.pop_back();
	heapifyDown(index);	
	return aux;
}

template <class T>
bool MaxHeap<T>::empty(){
	if(arrTree.size() == 0) return true;
	return false;
}

template <class T>
void MaxHeap<T>::push(T const& element){
	arrTree.push_back(element);
	int index = arrTree.size() - 1;
	heapifyUp(index);
}

template <class T>
void MaxHeap<T>::make_heap(vector<T> &arr){
	arrTree.resize(arr.size());
	for(int i = 0; i < arr.size(); i++) arrTree[i] = arr[i];
	for(int i = (arrTree.size() - 1); i >= 0; i--) heapifyDown(i);
	for(int i = 0; i < arr.size(); i++) arr[i] = arrTree[i];
}

template <class T>
void MaxHeap<T>::sort(vector<T> &arr){
	int index = arr.size() - 1;
	this->make_heap(arr);
	while(!(this->empty())){
		T maxElement = this->pop();
		arr[index] = maxElement;
		index--;
	}
}
