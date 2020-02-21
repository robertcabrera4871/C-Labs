#include <iostream>
#include <string>
using namespace std;
int getNumberFromChar(char inputChar);

int main()
{
	int maxPhoneChars = 10;
	int currentCharAmount = 0;

	char currentChar;
	int numberFromChar;
	string phoneNumber;

	while (currentCharAmount != maxPhoneChars) {
		cout << "Enter an Uppercase Letter" << endl;
		cin >> currentChar;
		currentCharAmount++;

		numberFromChar = getNumberFromChar(currentChar);
		if (numberFromChar == 0) {
			currentCharAmount--;
			cout << "Please enter only Uppercase Letters" << endl;
		}else {
			phoneNumber += to_string(numberFromChar);
			cout << numberFromChar << endl;
		}
		

		if (currentCharAmount == 3 || currentCharAmount == 6) {
			phoneNumber += "-";
		}
	}
	cout << phoneNumber;

}

int getNumberFromChar(char inputChar) {
	switch(inputChar) {
	case 'A': case 'B': case 'C':
		return 2;
	case 'D': case 'E': case 'F': 
		return 3;
	case 'G': case 'H': case 'I':
		return 4;
	case 'J': case 'K': case 'L':
		return 5;
	case 'M': case 'N': case 'O':
		return 6;
	case 'P': case 'Q': case 'R': case 'S':
		return 7;
	case 'T': case 'U': case 'V':
		return 8;
	case 'W': case 'X': case 'Y': case 'Z':
		return 9;
	default:
		return 0;
	}
}
