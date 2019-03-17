#include "myforwardlist.h"
#include <iostream>
using namespace std;

int main(){

	ForwardList<int> MyForwardList;
	cout << "Your ForwardList has been initialized ";

	if(MyForwardList.empty())
		cout << "correctly, and it is empty" << endl << endl;
	else
		cout << "incorrectly " << endl << endl;


	cout << "Let's push_front numbers from 1 up to 5 " << endl;
	for(int i = 1; i <= 5; i++)
		MyForwardList.push_front(i);

	cout << "So the ForwardList has " << MyForwardList.size() << " elements" << endl;
	MyForwardList.print_list();
	cout << "\nLet's reverse the order of the elements "<< endl;
	MyForwardList.reverse();
	MyForwardList.print_list();
	cout << "\nNow let's pop_front elements from the ForwardList so that we remain with 3 elements" << endl;

	int aux;

	while(MyForwardList.size() != 3){
		aux = MyForwardList.pop_front();
		cout << "I erased the element " << aux << endl;
	}

	cout << "So the ForwardList has " << MyForwardList.size() << " elements" << endl;
	MyForwardList.print_list();
	cout << "\nLet's add to the ForwardList the numbers from 10 up to 15 " << endl;

	for(int i = 10; i <= 15; i++)
		MyForwardList.push_front(i);

	cout << "So the ForwardList has " << MyForwardList.size() << " elements" << endl;
	MyForwardList.print_list();
	cout << "\nNow let's erase the elements in the 0, 2, 4, 6, 7 and 8 position " << endl;
	
	for(int i = 0; i <= 4; i++)
		MyForwardList.erase(i);
	MyForwardList.erase(3);
	cout << "So the ForwardList has " << MyForwardList.size() << " elements" << endl;
	MyForwardList.print_list();

	cout << "\nNow lets add 13 between 14 and 12, and 11 between 12 and 10" << endl;
	MyForwardList.insert(1, 13);
	MyForwardList.insert(3, 11);
	cout << "So the ForwardList has " << MyForwardList.size() << " elements" << endl;
	MyForwardList.print_list();

	cout << "\nNow let's add 10 at the position 0 and between 13 and 12" << endl;
	MyForwardList.push_front(10);
	MyForwardList.insert(3, 10);
	cout << "So the ForwardList has " << MyForwardList.size() << " elements" << endl;
	MyForwardList.print_list();

	cout << "\nNow let's erase all the 10s in the ForwardList" << endl;
	MyForwardList.remove(10);
	cout << "So the ForwardList has " << MyForwardList.size() << " elements" << endl;
	MyForwardList.print_list();	
	
	cout << "\nNow let's pop all the elements from the ForwardList till it is empty" << endl;
	while(!MyForwardList.empty()){
		aux = MyForwardList.pop_front();
		cout << "I erased the element " << aux << endl;
	}

	cout << "So the ForwardList has " << MyForwardList.size() << " elements" << endl;
	return 0;
}