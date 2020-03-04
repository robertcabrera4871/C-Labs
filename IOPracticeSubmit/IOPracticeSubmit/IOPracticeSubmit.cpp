#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream myInStream;
	ofstream myOutStream;

	myOutStream.open("grades.txt");

	int control = 1;
	int grade;

	while (control <= 5) {
		cout << "Enter Grade " << control << ": ";
		cin >> grade;
		myOutStream << grade << endl;
		control++;
	}

	myOutStream.close();
	myInStream.open("grades.txt");

	cout << "-----------------" << endl;
	cout << "   File Output   " << endl;
	cout << "-----------------" << endl;

	while (myInStream >> grade) {
		cout << "       "  << grade << endl;
	}

	myInStream.close();
}

