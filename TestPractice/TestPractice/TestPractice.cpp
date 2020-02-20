#include <iostream>
#include <string>
using namespace std;
int letterCounter(string firstName, string lastName);

int main()
{
	string firstName;
	string lastName;
	cout << "Please enter your name ";
	cin >> firstName>> lastName;
	cout << "Your name is! " << firstName << " " << lastName<< endl;
	cout << "Your name has " << letterCounter(firstName, lastName) << " letters!";
	int x;
	if (x = NULL) {
		cout << "x is null!!";
	}
	else {
		cout << "\nx is " << x << endl;
	}
	int stringy;
	cout << "Enter a number!! I'll fucking kill you if you put a string in bitch!!!" << endl;
	cin >> stringy;
	if (!cin) {
		cout << "You died a terrible death. Theres blood everywhere. You'll never be found... " << endl;
	}
	else {
		cout << "Good, remember, I know where you live.... bitch" << endl;
	}
	cout << stringy;
}
int letterCounter(string firstName, string lastName) {
	unsigned int letterCount = 0;
	for (int i = 0; i < firstName.length(); i++) {
		letterCount++;
	}
	for (int i = 0; i < lastName.length(); i++) {
		letterCount++;
	}
	return letterCount;
}


