
#include <iostream>

#include<iomanip>
using namespace std; 

//using std::cout; 
//using std::endl; 
//using std::cin; 
//
//using std::left; 
//using std::setw; 

int main()
{
	//cout << pow(-5, 0.5) << endl; //onamtopaei


	//cout << "sqrt(37) yields -> " << sqrt(37) << endl;

	//the DATA TYPE of the input to any function MATTERS!
	//pedantic
	//cout << sqrt(25, 36) << "\n\a\a"; //prints 5.09902 (again, limited precision)
	//cout << sqrt(-1.2) << endl; //prints variation of ‘nan’ – “Not a number”
	//cout << sqrt('a') << endl; //prints 9.4886 (‘a’ has ASCII value = 97)
	//cout << sqrt("nine"); //ERROR

	//std::string word = "hello678"; 
	//

	//cout << word.length() << endl; 

	//cout << sqrt(1'000'000) << endl; 


	//int a = 0b0100;
	//cout << a << endl;

	//int b = 0b1000'0100;
	//cout << b << endl;

	char firstInitial, blankSpace;

	std::string lastName;
	
	// S Norman
	//cout << "Enter first initial, space, last name: " << endl;
	////std::cin >> firstInitial >> blankSpace >> lastName;

	//std::cin.get(firstInitial);
	//cin.get(blankSpace); //stores ‘ ‘ in blankSpace variable
	//cin >> lastName;
	////cin.get() will not work on strings (or any non-char data type)

	//cout << "first initial: " << firstInitial << endl;
	//cout << "blank space: " << blankSpace << endl;
	//cout << "lastName: " << lastName << endl;


	//cout << "Enter your user name: " << endl;
	//std::string username;

	//cin.ignore('\n'); //ignores until user presses Enterf
	////use cases? 
	//cin >> username;
	//cout << "you entered: " + username << endl;


	//double mealCost, tipAmount, totalCost;
	//mealCost = 1000.99;

	//cout << std::fixed << std::setprecision(2); 

	//tipAmount = mealCost * 0.20;
	//totalCost = mealCost + tipAmount;
	//
	//cout << "$" << totalCost << endl;


	cout << "First name" << "\tLast name" << "\tHeight(in)" << endl;
	cout << "--------------------------------------------" << endl;
	cout << std::left << std::setw(16) << "Seth";
	cout << left << setw(16) << "Norman";
	cout << 69 << endl;

	//next row
	cout << left << setw(16) << "Jane";
	cout << left << setw(16) << "Doe";
	cout << 64 << endl;

}
