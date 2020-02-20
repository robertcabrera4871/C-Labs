#include <iostream>
#include <string>

using namespace std;
string getUsersName();
void getUsersAge(int *ageR);
void displayTicket(string name, int age);

double ticketPrice;

//Assume wont enter letters for age or number for name


int main()
{
	string name = getUsersName();
	int ageR;
	getUsersAge(&ageR);
	displayTicket(name, ageR);
	
}
string getUsersName() {
	string userName;
	cout << "Enter your name: " << endl;
	cin >> userName;
	return userName;
}

void getUsersAge(int * ageR)
{
	int control = 0;
	int temp = 0;
	while (control != 1) {
		cout << "Enter your age: " << endl;
		cin >> temp;
		if (temp > 100 || temp < 0) {
			cout << "That cant be, please enter your age again " << endl;
		}
		else if (!cin) {
			cout << "Please enter a number next time" << endl;
			*ageR = 3;
			break;
		}
		else {
			*ageR = temp;
			control = 1;
		}
	}
}

void displayTicket(string name, int age)
{
	cout << "Your name is " << name << endl;
	cout << "Your age is " << age << endl;
	if (age <= 13) {
		ticketPrice = 9.99;
	}
	else if (age > 13 && age < 65) {
		ticketPrice = 19.99;
	}
	else if (age >= 65) {
		ticketPrice = 12.99;
	} 
	cout << "Your ticket price is: " << ticketPrice;
}

