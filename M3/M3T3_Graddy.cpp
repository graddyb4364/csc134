// CSC-134
// M3T3 Dice game
// Bridgit Graddy
// 02/21/2024

// compiler directives
// (required for the program to run)
#include <iostream>
#include <cstdlib> //for rand()
#include <ctime> // for time()
using namespace std;
int main() {
    cout << "Welcome to craps table!" << endl; 
    // delcare variables
    int roll, die1, die2, seed;
    // set the random seed
    //cout << "Enter lucky number: ";
   // cin >> seed;
    srand(time(0));

    //role the dice
    // cout << "What did you roll? ";
    // cin >> roll;
    
    die1 = (rand() % 6) +1;
    die2 = (rand() % 6) +1;
    roll = die1 + die2;

    //get the results
    cout << "You rolled a " << die1 << " and a " << die2 << "!" << endl;

    cout << "Your roll was: " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "You win!" << endl;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        cout << "You lose..." << endl;
    }
    else {
        cout << "Your point is: " << roll << endl;
        cout << "TODO: roll the point" << endl;
        int point = roll;
        // roll again
        die1 = (rand() % 6) +1;
        die2 = (rand() % 6) +1;
        roll = die1 + die2;
        // results
        cout << "You rolled a " << die1 << " and a " << die2 << "!" << endl;
        cout << "Your roll was: " << roll << endl;
        if (roll == point) {
            cout << "You Win!";
        }
        else if (roll == 7) {
            cout << "You lose..." << endl;
        }
        else {
            
        }
    }
  return 0; 
} 