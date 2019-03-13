#include "myfowardlist.h"
#include <iostream>
using namespace std;

int main(){

	FowardList<int> MyFowardList;
	cout << "Your FowardList has been initialized ";

	if(MyFowardList.empty())
		cout << "correctly, and it is empty" << endl << endl;
	else
		cout << "incorrectly " << endl << endl;


	cout << "Let's push_front numbers from 1 up to 5 " << endl;
	for(int i = 1; i <= 5; i++)
		MyFowardList.push_front(i);

	cout << "So the FowardList has " << MyFowardList.size() << " elements" << endl;
	MyFowardList.print_list();
	cout << "\nLet's reverse the order of the elements "<< endl;
	MyFowardList.reverse();
	MyFowardList.print_list();
	cout << "\nNow let's pop_front elements from the FowardList so that we remain with 3 elements" << endl;

	int aux;

	while(MyFowardList.size() != 3){
		aux = MyFowardList.pop_front();
		cout << "I erased the element " << aux << endl;
	}

	cout << "So the FowardList has " << MyFowardList.size() << " elements" << endl;
	MyFowardList.print_list();
	cout << "\nLet's add to the FowardList the numbers from 10 up to 15 " << endl;

	for(int i = 10; i <= 15; i++)
		MyFowardList.push_front(i);

	cout << "So the FowardList has " << MyFowardList.size() << " elements" << endl;
	MyFowardList.print_list();
	cout << "\nNow let's erase the elements in the 0, 2, 4, 6, 7 and 8 position " << endl;
	
	for(int i = 0; i <= 4; i++)
		MyFowardList.erase(i);
	MyFowardList.erase(3);
	cout << "So the FowardList has " << MyFowardList.size() << " elements" << endl;
	MyFowardList.print_list();

	cout << "\nNow lets add 13 between 14 and 12, and 11 between 12 and 10" << endl;
	MyFowardList.insert(1, 13);
	MyFowardList.insert(3, 11);
	cout << "So the FowardList has " << MyFowardList.size() << " elements" << endl;
	MyFowardList.print_list();

	cout << "\nNow let's add 10 at the position 0 and between 13 and 12" << endl;
	MyFowardList.push_front(10);
	MyFowardList.insert(3, 10);
	cout << "So the FowardList has " << MyFowardList.size() << " elements" << endl;
	MyFowardList.print_list();

	cout << "\nNow let's erase all the 10s in the FowardList" << endl;
	MyFowardList.remove(10);
	cout << "So the FowardList has " << MyFowardList.size() << " elements" << endl;
	MyFowardList.print_list();	
	
	cout << "\nNow let's pop all the elements from the FowardList till it is empty" << endl;
	while(!MyFowardList.empty()){
		aux = MyFowardList.pop_front();
		cout << "I erased the element " << aux << endl;
	}

	cout << "So the FowardList has " << MyFowardList.size() << " elements" << endl;
	return 0;
}