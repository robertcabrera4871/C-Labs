#include <iostream>
using namespace std;

//Assume that they wont enter string or character
int main(void) {
	int control = 0;
	int squareSize = 0;
	while (control != 1) {
		cout << "enter a positive integer value greater than 1 (n)\n";
		cin >> squareSize;
		if (!cin) {
		cout << "please input a number\n";
		control = 1;
		break;
		}
		if (squareSize > 1 && squareSize < 50) {
			control = 1;
		}else if (squareSize >= 50) {
			cout << "size is too big! cant be greater then or equal to 50!\n";
		}else if (squareSize <= 1) {
			cout << "size is too small! must be greater then 1!\n";
		}else{
			cout << "please input a number\n";
		}
	}

	cout << '+';
	for (int i = 0; i < squareSize; i++) {
		cout << '-';
		cout << '+' << endl;
	}
	for (int i = 0; i < squareSize; i++) {
		cout << '|';
		for (int j = 0; j < squareSize; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for (int i = 0; i < squareSize; i++) {
		cout << '-';
		cout << '+' << endl;
	}
	return 0;
}


