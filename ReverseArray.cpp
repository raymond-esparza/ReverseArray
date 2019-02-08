/*
Program: Reverse Array
Author: Raymond Esparza

This program prompts a user for a number of elements, then
to input that many integers. The program then calls a single
function which displays the numbers in reverse order.

*/

#include <iostream>
using namespace std;

void reverseArray(int *myarray, int i){
	for (; i != 0; --i){					//as long as there are still elements to display
		cout << myarray[i - 1] << " ";     //print out the current element
	}
}


int main () {
	int i;
	cout << "Enter amount of elements: ";
	cin >> i;
	int *myarray = new int[i];           //dynamically allocate space for an array of integers
	for (int j = 0; j != i; ++j) {
		cout << "Enter an integer: ";
		cin >> myarray[j];
	}

	cout << "Numbers reversed: ";
	reverseArray(myarray, i);          //call function
	cout << endl;
	delete[] myarray;                 //release memory
	
	return 0;
}