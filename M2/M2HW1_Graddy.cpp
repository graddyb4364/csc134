// CSC 134
// M2HW1 - banking transactions
// Bridgit Graddy
// 02/26/2024


#include <iostream>
using namespace std;

int main() {
// delcare varibales
string name; 
double accbal, deposit, withdrawal, finaccbal;
//ask for name
  cout << "What is your name? "; 
  cin >> name;
//ask for information
    cout << "What is your account balance? ";
    cin >> accbal;
    cout << "What is your deposit ammount? ";
    cin >> deposit;
    cout << "What is you withdrawal ammount? ";
    cin >> withdrawal;
    cout << endl << endl; 
//do the math
finaccbal = accbal + deposit - withdrawal;
//display the information
    cout << "Name: " << name << "  Account Number: 32210354"<< endl;
    cout << "Final Account Balance: " << finaccbal;
    cout << endl << endl; 
  return 0; 

} // end of the main() method