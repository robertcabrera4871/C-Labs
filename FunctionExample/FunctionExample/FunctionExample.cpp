// FunctionExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//double larger(double x, double y);

double larger(double x, double y) {
	double max;
	if (x >= y)
		max = x;
	else
		max = y;

	return max;
}
int main()
{
	double x = 17.0;
	//	double xarray[5] = { 1.0,2.0,3.0,4.0,5.0 };
	double y = 9.0;
	//   cout << "Hello World!\n";
	double result = larger(x, y);
	cout << "The result of the 'larger' function is: " << result;
}
