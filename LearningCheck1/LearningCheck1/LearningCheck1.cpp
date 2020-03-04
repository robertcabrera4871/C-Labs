#include <iostream>
using namespace std;

//Assumptions
// The user will enter letters only
//The user wil

void outputArray(char charArray[], int index) {

	for (int i = index - 1; i >= 0; i--) {
		cout << charArray[i];
	}
}
int main()
{
	char charArray[17];
	char control = ' ';

	int index = 0;

	bool conditon = false;

	cout << "Enter up to 16 letters" << endl;

	while (control != '.') {
		if (index >= 17) {
			cout << "You entered more then 16 letters";
			conditon = true;
			break;
		}
		cin >> control;
		charArray[index++] = control;
	}
	if (!conditon) {
		outputArray(charArray, index);
	}
	
}


