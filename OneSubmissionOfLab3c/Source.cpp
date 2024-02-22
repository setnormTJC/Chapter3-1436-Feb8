//
//  main.cpp
//  lab_3c
//
//  Created by Satoshi on 2/13/24.
//

#include <iostream>
#include <iomanip> // setprecision??????????

using namespace std;

int main() {
    // ???????
    cout.imbue(locale(""));

    // ????????????
    cout << left << setw(20) << "Name" << setw(15) << "Units available" 
        << setw(10) << "Cost" << "Short description" << endl;
    
    cout << setfill('-') << setw(60) << "-" << setfill(' ') << endl;

    // ???????
    cout << left << setw(20) << "Cheerios" << setw(15) << 4 << setw(10) << fixed << setprecision(2) 
        << "$6.99" << "One of the most well-known brands of cereal" << endl;

    cout << left << setw(20) << "White shoelaces" << setw(15) << 8675309 << setw(10) 
        << fixed << setprecision(2) << "$13.99" << "Very sturdy shoelaces. Unlikely to snap on you mid-tie." << endl;

    return 0;
}
