#include <iostream>

#include<fstream>

using namespace std;

int main()
{
    //f
    //caveat -> reading input files is limited until we get to LOOPS
    ifstream inputFile{ "inputFile.txt" };
    int a = 232; 

    if (!inputFile) //! -> NOT (this means that the input file was NOT found)
    {
        //a safety check to make sure file gets found 
        cout << "FILE NOT FOUND - :[ " << endl; 
       


    }

    else
    {
        cout << "HOORAY! we found the file" << endl; 
        //we will READ and output to the terminal the file CONTENTS next time

    }



    return 0;
}