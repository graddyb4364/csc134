//Bridgit Graddy
// CSC-134
// M3Lab1-choices
// 02/19/2024


// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "Did you make it to class today?" << endl;
  cout << "Enter 1 for yes and 2 for no: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "Good job, don't skip class you're paying to be there." << endl;
  }
  else if (2 == choice) {
  	cout << "Why not, you pay to be there. You're wasting your money!" << endl;
    cout << "Did you atleast work on school work today?" << endl;
    cout << "Enter 3 for yes and 4 for no: ";
    cin >> choice;
  }
     if(3 == choice) {
        cout << "Well atleast you're not a complete failure but you still need to go to class." << endl;
     }
     else if (4 == choice) {
        cout << "What are you even doing with your life? You need to rethink your choices!" << endl;
     }

  else {
  	cout << "Choice invalid! Read the choices!" << endl;
  }

  // finish up
  cout << "..." << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method