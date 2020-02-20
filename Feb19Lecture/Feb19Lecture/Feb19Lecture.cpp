#include <iostream>
#include <string>
using namespace std;


int main()
{
	int i = 0;

	cout << "LOOP ONE:" << endl;
	while (i <= 20) {
		cout << i << " ";
		i = i + 5;
	}
	cout << endl;
	int y = 20;
	cout << "LOOP TWO:" << endl;
	while (y < 20) {
		cout << i << " ";
		y = y + 5;
	}
	cout << endl;

	bool sunsOut = true;

	cout << "LOOP THREE: (Assume answer is Boolean 0 or 1)" << endl;
	while (sunsOut) {
		cout << "Suns Out??" << endl;
		cin >> sunsOut;
		if (!cin) {
			break;
		}
		if (sunsOut != false) {
			cout << "GUNS OUT!" << endl;
		}

	}

	cout << "LOOP FOUR:" << endl;
	string passAttempt;
	string answer = "1234"; 
	int allowedAttempts = 5;
	int attempts = 0;
	
	while (passAttempt != answer) {
		cout << "Enter the pin " << allowedAttempts - attempts << " attempts left" << endl;
		cin >> passAttempt;
		attempts++;
		if (passAttempt == answer) {
			cout << "Youre in!" << endl;
		}else if (attempts == allowedAttempts) {
			cout << "Locked out " << endl;
				break;

		}
	}
}