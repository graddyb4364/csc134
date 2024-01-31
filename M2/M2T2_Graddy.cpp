// CSC 134
// M2T2 - Apple Sales part 2
// Bridgit Graddy
// 1/31/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "M2T2 - Apple Sales part 2" << endl;
    // Declare variables
    string name;
    int num_apples;
    double price_per_apple;

    // ask for values
    cout << "Hello, what's your name? ";
    cin >> name;
    cout << "Welcome to my Apple Orchard, " << name << "!" << endl;
    cout << "How many apples would you like? ";
    cin >> num_apples; 
    cout << "The cost of 1 apple is $";
    cin >> price_per_apple;
    cout << endl;
    // Do the calcutlations
    double total_price = 0;
    // NOTE: Math operations a + - * /
    total_price = num_apples * price_per_apple;

    // Print the recipt
    cout << fixed << setprecision(2);
    cout << "---------------------------------" << endl;
    cout << "Thank you for shopping!" << endl; 
    cout << "---------------------------------" << endl;
    cout << "apple \t \t" << num_apples << "\t  $" << price_per_apple << endl;
    cout << "---------------------------------" << endl;
    cout << "Total:\t \t \t $" << total_price << endl;
    cout << endl;

    return 0;
}
