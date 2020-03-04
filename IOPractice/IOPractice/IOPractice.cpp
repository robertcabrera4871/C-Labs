#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream myOutFile;
	myOutFile.open("myTextFile.txt");
	myOutFile << "This is my information written to the file";
	myOutFile.close();

	ifstream myInFile("grades.txt");
	int grades;
	while (myInFile >> grades) {
		cout << grades << endl;
	}

}