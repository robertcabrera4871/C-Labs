
#include <iostream>
#include <string>
using namespace std;
string membershipLevel;
double amountSpentMonthly;
double discountAwardsLevel;
double totalSpent;


int main()
{
	
	cout << "Please input Amount Spent Monthly\n";
	cin >> amountSpentMonthly;
	cout << "\nPlease input Total Spent\n";
	cin >> totalSpent;

	if (amountSpentMonthly < 250 ) {
		membershipLevel = "Basic";
		discountAwardsLevel = totalSpent * 0.025;
	}else if (250 < amountSpentMonthly && amountSpentMonthly < 500) {
		membershipLevel = "Basic";
		discountAwardsLevel = totalSpent * 0.05;
	}else if (500 < amountSpentMonthly && amountSpentMonthly < 1000) {
		membershipLevel = "Elite";
		discountAwardsLevel = totalSpent * 0.075;
	}else if (1000 < amountSpentMonthly && amountSpentMonthly < 2000) {
		membershipLevel = "Elite";
		discountAwardsLevel = totalSpent * 0.08;
	}else if (2000 < amountSpentMonthly && amountSpentMonthly < 3000) {
		membershipLevel = "Platinum";
		discountAwardsLevel = totalSpent * 0.09;
	}else  {
		membershipLevel = "Platinum";
		discountAwardsLevel = totalSpent * 0.1;
	} 
	cout << "\nMember Ship Level: "  << membershipLevel << " Discount Awards Level: " << discountAwardsLevel << endl;

} 

