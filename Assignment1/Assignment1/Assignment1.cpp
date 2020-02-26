#include <iostream>
using namespace std;
int main()
{
	/*
	Asumptions:
	The user will not enter a character
	*/
	int myArray[10];
	int searchNum;
	bool isFound = false;

	cout << "Enter 10 ints" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> myArray[i];
	}
	cout << "Enter the number to be searched for" << endl;
	cin >> searchNum;
	for (int i = 0; i < 10; i++) {
		if (myArray[i] == searchNum) {
			cout << "The number " << searchNum << " is found at index: " << i << endl;
			isFound = true;
		}
	}
	if (!isFound) {
		cout << "The number " << searchNum << "is not found in the list!!!";
	}
}