// Bridgit Graddy
// CSC 134
// M2T1 - Receipt
// 1-29-2024

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //price brfore tax
    // The amount of total tax owed (8%)
    // The total including tax
   string meal = "Burger Meal";
   double meal_price = 5.99;
   double tax_percent = 0.08;

   // Do the calcutlations
   double tax_amount = meal_price * tax_percent;
   double total = meal_price + tax_amount;


   // Print the receipt
   //TODO make it line up and fix decimals
    cout << meal << "\t $" << meal_price << endl;
    cout << endl;
    cout << "Tax:" << "\t \t $" << tax_amount << endl;
    cout << "Total:" << "\t \t $" << total << endl;

    cout << "Thank you" << endl;

    return 0;
}