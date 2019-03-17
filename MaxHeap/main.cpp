#include<iostream>
#include<vector>
#include "mymaxheap.h"

using namespace std;

int main(){

	MaxHeap<int> MyMaxHeap;
	cout << "The MaxHeap has been ";

	if(MyMaxHeap.empty())
		cout << "correctly initialized " << endl << endl;
	else
		cout << "incorrectly initialized " << endl << endl;

	vector<int> arr = {7,8,6,0,8,1,7,10,9,1};
	
	cout << "Having this values already stored in an array:\narray1 = [";
	for(int i = 0; i < arr.size() - 1; i++) cout << arr[i] << ", ";
	cout << arr[arr.size() - 1] << "]" << endl;

	cout << "Let's make a heap with them: \narray1 = [";
	MyMaxHeap.make_heap(arr); // Time complexity O(N) 
	for(int i = 0; i < arr.size() - 1; i++) cout << arr[i] << ", ";
	cout << arr[arr.size() - 1] << "]" << endl;
	cout << "The time complexity of the previous method 'make_heap(array)' is O(N)" << endl;

	vector<int> arr2 = {8,1,-5,0,4,7,11,-2};
	
	cout << "\nLet's have another array with data already stored:\narray2 = [";
	for(int i = 0; i < arr2.size() - 1; i++) cout << arr2[i] << ", ";
	cout << arr2[arr2.size() - 1] << "]" << endl;

	cout << "Let's sort them: \narray2 = [";
	MyMaxHeap.sort(arr2); // Time complexity O(NLogN) 
	for(int i = 0; i < arr2.size() - 1; i++) cout << arr2[i] << ", ";
	cout << arr2[arr2.size() - 1] << "]" << endl;
	cout << "The time complexity of the previous method 'sort(array)' is O(NLogN)" << endl;

	vector<int> arr3 = {7,0,3,-5,1,4,11,-2,8,0};

	cout << "\nThe previous two methods used an array with data already stored" << endl;
	cout << "Now let's push this elements into the MaxHeap dynamically:" << endl;
	for(int i = 0; i < arr3.size(); i++) cout << arr3[i] << " ";
	cout << endl;
	cout << "And see the top of the MaxHeap in each insertion" << endl << endl;

	for(int i = 0; i < arr3.size(); i++){
		cout << "Pushing this value into the MaxHeap: " << arr3[i] << endl;
		MyMaxHeap.push(arr3[i]);
		cout << "The top of the MaxHeap is: " << MyMaxHeap.top() << endl;
	}
	cout << "\nNow let's pop all the elements in the MaxHeap " << endl;
	cout << "We will see them sorted in a decreasing way: " << endl;
	while(!MyMaxHeap.empty()){
		cout << MyMaxHeap.pop() << " ";
	}cout << endl;

	cout << "\nTime complexity of pushing dynamically elements in the MaxHeap is O(NlogN)" << endl;
	cout << "Time complexity of poping elements in the MaxHeap is O(NLogN)" << endl;
	cout << "Time complexity of seeing the top element is O(1)" << endl;

	return 0;
}