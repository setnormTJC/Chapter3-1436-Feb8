#include <iostream>

#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	cout << pow(2, 10) << "\n\n\n" << endl; 
	cout << sqrt('s');

	const int COLUMN_WIDTH = 20; //SCREAMING_SNAKE case
	//COLUMN_WIDTH = 234; 
	cout << "Table of data" << endl; 
	cout << "--------------------------" << endl; //column header
	cout << left << setw(COLUMN_WIDTH) << "Name"
		<< right << setw(COLUMN_WIDTH) << "Age" << endl;

	cout << left << setw(COLUMN_WIDTH) << "JOhn Jacob Jing"
		<< setw(COLUMN_WIDTH) << 123 << endl; 

	//ANOTHER row!
	cout << left << setw(COLUMN_WIDTH) << "JANE Jacob Jing"
		<< setw(COLUMN_WIDTH) << 127 << endl;


	return 0;

}
