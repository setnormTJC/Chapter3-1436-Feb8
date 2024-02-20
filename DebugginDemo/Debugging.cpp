#include <iostream>

using namespace std;

int main()
{
    // f to c temperature unit conversion
    int fahrenheit = 32; //freezing point of water (at 1 atm of pressure)
    cout << "Celsius equivalent freezing point is " << (5 / 9) * fahrenheit - 32 << endl;
    //SHOULD be 0           //PEMDAS left to right 
    cout << "\n\nWhat is 5 / 9 ? " << 5 / 9 << endl; 
    fahrenheit = 212;//test water boiling point
    cout << "\n\nCelsius equivalent boiling point is " << (5 / 9) * (fahrenheit - 32) << endl;;
   
    //"hollow" play button 
    //__debugbreak();
    cout << "This is unexpected output" << endl; 

    cout << "unexpected thing" << endl; 
    //SHOULD be 100
    return 123;
}