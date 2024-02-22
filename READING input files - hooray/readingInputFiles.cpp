#include <iostream>

#include<fstream>
#include <string>

using namespace std;

int main()
{
    //f
    //caveat -> reading input files is limited until we get to LOOPS
    ifstream inputFile{ "inputFile.txt" }; 
    //declaring an "input file stream" type variable - named inputFile
    //and it corresponds to the inputFile.txt

    int a = 232; //declaring and intializing a variable named 'a' that is an integer type

    if (!inputFile) //! -> NOT (this means that the input file was NOT found)
    {
        //a safety check to make sure file gets found 
        cout << "FILE NOT FOUND - :[ " << endl; 
       
        //exclamation mark in most programming languages means NOT 

    }

    else
    {
        cout << "HOORAY! we found the file" << endl; 
        string input;
        //OOP -> child classes

        //in order to get MULTIPLE lines from a file, we will probably need LOOPS

        getline(inputFile, input); //for now, let's just use this and see what happens!
        //getline(cin, input)
        cout << input << endl; 
        //we will READ and output to the terminal the file CONTENTS next time

    }



    return 0;
}