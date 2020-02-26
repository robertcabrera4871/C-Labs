#include <iostream>
using namespace std;

enum menuOptions {
	OPTION1 = 1, OPTION2, OPTION3, EXITAPP
};
int main()
{
	/*
	int optSelect;
	enum days{Mon =22,Tues,Wed,Thurs};
	cout << "The value of enum day is: " << Mon << "," << Wed+1;
	return 0;
	cout << "Enter your option: ";
	cin >> optSelect;
	if (optSelect == OPTION1) {
	}
	else if (optSelect == OPTION2) {
		cout << "\n\nYou have called the second function: ____\n\n";
	}
	else if (optSelect == OPTION3) {
		cout << "\n\nYou have called the third function: ____\n\n";
	}
	else {
	}
	
	int optSelect2;

	switch (optSelect2) {
	case OPTION1:
		cout << "\n\nYou have called the first function: ____\n\n";
		break;
	case OPTION2:
		cout << "\n\nYou have called the second function: ____\n\n";
		break;
	case OPTION3:
		cout << "\n\nYou have called the third function: ____\n\n";
		break;
	default:
		cout << "\n\nYou have exited the application" << endl;
	}*/

	int list[5];
	int i;
	int avg = 0;

	for (i = 0; i < 5; i++) {
		cout << "Enter grade" << endl;
		cin >> list[i];
	}
	for (i = 0; i < 5; i++) {
		avg += list[i];
	}
	avg = avg / 5;
	cout << "\n AVG = " << avg;

}
