//Bridgit Graddy
// CSC 134
// 02-05-2024
//M2Lab1 - Crate Sales

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //take 1 -just a rectangle
    // declare variables
    double length, width, height;
    double volume;
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    double cost, charge, profit;

    // Ask for variables
    cout << "What is the length? ";
    cin >> length;
    cout << "What is the width? ";
    cin >> width;
    cout << "What is the Height? ";
    cin >> height;

    //do calcutlatins
    volume = length * width * height;
    cost = COST_PER_CUBIC_FOOT * volume;
    charge = CHARGE_PER_CUBIC_FOOT * volume;
    profit = charge - cost;

    //print th answer
    cout << "The volume is " << volume << " cubic feet." << endl;
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    cout << endl;
    return 0;
}