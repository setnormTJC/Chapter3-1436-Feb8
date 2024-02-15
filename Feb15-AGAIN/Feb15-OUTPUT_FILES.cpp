#include <iostream>

#include<fstream> //file stream

using namespace std;

int main()
{
    //\n\a\t\-> escape character
    ofstream outputFile("C:/Users/Work/Desktop/output.txt");//ofstream means OUTPUT File (stream) 
                        //"output.txt" is called a RELATIVE filepath
    

    //cout << "Hello?" << endl; //this outputs to the terminal 
    outputFile << "Hello, output file" << endl; //THIS outputs to 
                                                //the file named
                                           //"output.txt"
    for (int i = 0; i < 100'000; i++)
    {
        outputFile << "Hello2, output file" << endl;
        outputFile << "Hello,3 output file" << endl;
        outputFile << "Hello,4 output file" << endl;
    }
    return 0;
}