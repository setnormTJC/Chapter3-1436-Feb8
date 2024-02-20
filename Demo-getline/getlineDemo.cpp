#include <iostream>
#include <string>



using namespace std;

int main()
{
    //DEMOING how getline works! Hooray!
    cout << "Enter some nums:" << endl; 
    int num1, num2; 
    cin >> num1 >> num2; 
    //string word1, word2, word3; 
    string entireLine; 

    //cin.ignore();  //PROBLEM!!
    
    
    //cin >> word1 >> word2 >> word3; 
    cout << "Enter some text:" << endl;

    getline(cin, entireLine);
    //\n is "invisible"
    cout << "You entered " << entireLine << " - and that has a"
        "length of " << entireLine.length() << endl;


    return 0;
}