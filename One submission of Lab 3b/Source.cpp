#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    //part 1
    int x1 = 1;
    int x2 = 3;
    int y1 = 1;
    int y2 = 1;


    cout << "Enter x1, y1, x2, y2: " << endl; // P1 = (x1, y1); P2 = (x2, y2) 
    cin >> x1 >> y1 >> x2 >> y2; /*6\n*/
    //OPTIONAL - echo the user input back at them (cout << "You entered")
    cin.ignore(); //"Flushes" out the \n (newline character) 
    double partial_pythagorean = pow(x2 - x1, 2) + pow(y2 - y1, 2);
    double pythagorean = sqrt(partial_pythagorean);
    cout << setprecision(4) << "Distance between Point A  and Point B is:" << pythagorean 
        << endl;

    double cityBlockDistance = (x2 - x1) + (y2 - y1);
    cout << "Manhattan (AKA: city block) distance: " << cityBlockDistance << endl; 

    //Part 2
    
    
    string tweet = "";

    cout << "Enter tweet";
    getline(cin, tweet); 
    //getline will read in \n and store it in tweet variable 

    //output, part 3

    ofstream outputData;
    outputData.open("outputFile.txt");
    outputData << "You entered:" << tweet << endl;
    outputData << "Length of Tweet:" << tweet.length() << "characters" << endl;
    outputData.close();

    return 0;







}





