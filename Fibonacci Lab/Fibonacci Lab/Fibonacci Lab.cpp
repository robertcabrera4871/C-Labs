#include <iostream>
using namespace std;

int main()
{
	/*
	Assumptions:
	- The user will enter an integer
	- The user will enter the first two numbers in the sequence
	- The user will not enter an nth number below 3
	*/
	int counter = 3;
	int previous1;
	int previous2;
	int current;
	int nthFibonacci;

	cout << "Enter the first number of the sequence" << endl;
	cin >> previous1;
	cout << "Enter the second number of the sequence" << endl;
	cin >> previous2;

	current = previous2 + previous1;
	cout << "a3 = a2 + a1 = " << previous2 << " + " << previous1 << " = " << current << endl;
	
	cout << "Enter the desired n position" << endl;
	cin >> nthFibonacci;

	while (nthFibonacci >= 3 && counter != nthFibonacci){
		previous1 = previous2;
		previous2 = current;
		current = previous2 + previous1;
		counter++;
		cout << "a" << counter <<  " = a" << counter - 1 << " + a"<< counter - 2 << " = " << previous2 << " + " << previous1 << " = " << current << endl;
	}

	cout << "\nThe "<<nthFibonacci<<" Fibonacci number in this sequence is: " << current<< "\n";
}

