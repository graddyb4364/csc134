// Bridgit Graddy
// CSC 134
// M2T1 - Receipt
// 1-29-2024

#include <iostream>
#include <iomanip>
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
   double tax_amount;
   double total;

   // Do the calcutlations
   tax_amount = meal_price * tax_percent;
   total = meal_price + tax_amount;


   // Print the receipt
    cout << fixed << setprecision(2);

    cout << "Receipt - M2T1" << endl;
    cout << "Thank you for coming!" << endl;
    cout << "-----------------------" << endl;
    cout << meal << "\t $" << meal_price << endl;
    cout << "Tax:" << "\t \t $" << tax_amount << endl;
    cout << "-----------------------" << endl;
    cout << "Total:" << "\t \t $" << total << endl;
    cout << endl;
    cout << endl << endl;
    return 0;
}