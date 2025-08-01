
// Documentation Section 

/*
File Name : Lab 9
Author : Hamza Alsayed Almradny
Version : V.1
Purpose : Ask the user to enter 2 numbers and print the largest one of the two numbers.
Date : 17/7/2025
*/





#include <iostream>
using namespace std;

int main(){
	int num1, num2;

	cout << "Please, enter the first num: ";
	cin >> num1;

	cout << "Please, enter the second num: ";
	cin >> num2;

	if (num1 > num2) {
		cout << "The first num is greater than the second num!" << "\n";

	}

	else {
		cout << "The second num is greater than or equal to the first num!" << "\n";

	}



	return 0;
}

