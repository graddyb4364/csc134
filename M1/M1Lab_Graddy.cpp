// CSC 134
// M1Lab - Apple Sales
// Bridgit Graddy
// 1/24/2024

#include <iostream>
using namespace std;

int main()
{
    cout << "M1LAB - Apple Sales" << endl;
    // Simulate selling apples
    // Set up variables (nouns)
    string name = "Bridgit";
    int num_apples = 21; 
    double price_per_apple = 0.25;

    // Do the calcutlations
    double total_price = 0;
    // NOTE: Math operations a + - * /
    total_price = num_apples * price_per_apple;

    // Print the output  
    cout << "Welcome to " << name << "'s Apple Orchard!" << endl;
    cout << "We have " << num_apples << " Apples in stock";
    cout << " at a cost of $" << price_per_apple << " each." << endl;
    cout << "For a total cost of $" << total_price << "." << endl;
    cout << endl;

    return 0;
}