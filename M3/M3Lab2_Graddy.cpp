// CSC 134
// M3Lab2 - Grades
// Bridgit Graddy
// 02/26/2024


#include <iostream>
using namespace std;

int main() {
    //delcare varibales
    int grade;
    
    // Ask for grade
    cout << "What is you numerical grade? ";
    cin >> grade;

    // Find the letter grade
    if (grade > 89 && grade < 101) {
        cout << "Your grade is an A!" << endl;
    }
    else if (grade < 90 && grade > 79){
        cout << "Your grade is a B!" << endl;
    }
    else if (grade < 80 && grade > 69){
        cout << "Your grade is a C!" << endl;
    }
    else if (grade < 70 && grade > 59){
        cout << "Your grade is a D!" << endl;
    }
    else if (grade < 60 && grade > -1){
        cout << "Your grade is a F!" << endl;
    }
    else {
        cout << "Invalid number, enter a value from 0-100!" << endl;
    }
  return 0; 

} 