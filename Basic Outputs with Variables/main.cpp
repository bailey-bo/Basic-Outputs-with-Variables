//
//  main.cpp
//  Basic Outputs with Variables
//
//  Created by Bailey Borchers on 6/26/21.
//

#include <iostream>

#include <iostream>
using namespace std;

int main() {
    int userNum = 0;
    int userNum2 = 0;

    cout << "Enter integer:" << endl;
    cin  >> userNum;
    cout << "You entered: " << userNum << endl;
    cout << userNum << " squared is " << userNum * userNum << endl;
    cout << "And " << userNum << " cubed is " << userNum * userNum * userNum << "!!" << endl;
    cout << "Enter another integer:" << endl;
    cin >> userNum2;
    cout << userNum << " + " << userNum2 << " = " << userNum + userNum2 << endl;
    cout << userNum << " * " << userNum2 << " = " << userNum * userNum2 << endl;
    
    cout << "   *   " << endl;
    cout << "  ***  " << endl;
    cout << " ***** " << endl;
    cout << "*******" << endl;
    cout << "  ***  " << endl << endl << endl;
    cout << " /\\   /\\" << endl;
    cout << "   o o   " << endl;
    cout << "  =   =  " << endl;
    cout << "   ---   " << endl;
    
    
   return 0;
}
