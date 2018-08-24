/*
Spring 2018 COP2272.04 Computer Programming 1
Assignment 2
Purpose: Displays a n-by-n pattern, given 1<=n<=9
Student Name: Justin Krum
*/

#include <iostream>
using namespace std;

/**
	Displays a pattern of a triangle that is n by n high and long

	@param n Value that the function displays a n by n pattern
	@return void
*/
void nByN(int n) {

	//Loops through all the numbers from 1 to n
	for (int i = 1; i <= n; i++) {

		//Outputs the number of spaces equal to the difference of (n-i)
		for (int j = n; j > i; j--)
			cout << "   ";

		//Outputs value of k
		for (int k = i; k > 0; k--)
			cout << k << "  ";

		cout << endl;
	}

	cout << "\n...\nn  (n-1) ... 3  2  1" << endl;
}

//Main function
int main() {
	//Initalize variables
	int inValue;
	bool valid = false;

	//Loops until a valid number is entered
	while (!valid) {
		//Input of inValue
		cout << "Enter a value: ";
		cin >> inValue;
		
		//If value entered was a valid value
		if (inValue >= 1 && inValue <= 9) valid = true;
		//Otherwise print it's invalid
		else cout << "Invalid value, please re-enter.\n" << endl;
	}

	//Calls nByN with the value of inValue
	nByN(inValue);
}