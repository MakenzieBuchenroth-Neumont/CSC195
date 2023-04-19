#include <iostream>
#include "myConfig.h"
using namespace std;
struct Person
{
	char name[32];
	int id;
};
void Double(int* intPtr) {
	// create a function above main() called Double that takes in an int pointer parameter
		// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
		// !! make sure to dereference the pointer to set the value and not set the address !!
	*intPtr = *intPtr * 2;
}
void Square(int iParam) {
	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
		// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
	iParam = iParam * iParam;
}
void SquareRef(int& iParam) {
	iParam = iParam * iParam;
}
int main()
{
	Config myConfig;
	myConfig.Version.major = 1;
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	int myInt = 9;
	int& iRef = myInt;
	// declare a int reference and set it to the int variable above
	int& intRef = myInt;
	// output the int variable
	cout << myInt;
	// set the int reference to some number
	intRef = 5;
	// output the int variable
	cout << "\n" << myInt;
	// what happened to the int variable when the reference was changed? (insert answer)
		// THE INT VARIABLE WAS CHANGED TO THE VALUE OF THE REFERENCE.
	// output the address of the int variable
	cout << "\n" << &myInt;
	// output the address of the int reference
	cout << "\n" << &intRef;
	// are the addresses the same or different? (insert answer)
		// YES
		// call the Square function with the int variable created in the REFERENCE section
	Square(myInt);
	cout << "\nSquare() value = " << myInt;
		// output the int variable to the console
	cout << "\n" << myInt;
		// !! notice how the variable has not changed, this is because we only passed the value to the function !!
		// change the Square function to take a int reference
	SquareRef(myInt);
	cout << "\nSquareRef() value = " << myInt;
		// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
		// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
		// ** POINTER VARIABLE **
		//
		// declare an int pointer, set it to nullptr (it points to nothing)
	int * intPtr = NULL;
		// set the int pointer to the address of the int variable created in the REFERENCE section
	intPtr = &myInt;
		// output the value of the pointer
	cout << "\nValue of ptr is " << intPtr;
		// what is this address that the pointer is pointing to? (insert answer)
			// THE SAME ADDRESS AS MYINT
		// output the value of the object the pointer is pointing to (dereference the // ** POINTER PARAMETER **
	cout << "\nInitial value of ptr = " << *intPtr;
		// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(intPtr);
		// output the dereference pointer
	cout << "\nAfter double value is = " << *intPtr;
		// output the int variable created in the REFERENCE section
	cout << "\n" << myInt;
		// did the int variable's value change when using the pointer?
			// NO
		// 
		// ** ALLOCATION/DEALLOCATION **
		//
		// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
		// output the pointer value, this should be the address of the int allocated on the heap
		// output the dereference pointer
		// deallocate the int pointer to free up the memory
		// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4 - 6
		// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
		// use a for loop and output each of the ints in the array
		// use a for loop and output the address of each of the ints in the array
		// deallocate the int pointer to free up the memory block (remember it's an array)
		// ** STRUCTURE **
		//
		// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
		// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
		// use a for loop and output the name and id of each person in the array
		// deallocate the person pointer to free up the memory block (remember it's an array)
};