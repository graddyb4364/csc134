// Bridgit Graddy
// CSC 134
// M3T2
// 02-14-2024

#include<iostream>
using namespace std;

int main()
{
    //declare variables
    double lengthA, widthA, lengthB, widthB;
    // Ask for length and width of first rectangle
    cout << "What is the length of rectangle A? ";
    cin >> lengthA;
    cout << "What is the width of rectangle A? ";
    cin >> widthA;
    cout << "What is the length of rectangle B? ";
    cin >> lengthB;
    cout << "What is the width of rectangle B? ";
    cin >> widthB;
    //Calculate the areas
    double areaA = lengthA * widthA;
    double areaB = lengthB * widthB;
    //Print the areas
    cout << endl;
    cout << "Rectangle A Area: " << areaA << endl;
    cout << "Rectangle B Area: " << areaB << endl;
    //Which rectangle area is bigger
     if (areaA > areaB) {
        cout << "Rectangle is A bigger." << endl;
     }
    else (areaA < areaB) {
        cout << "Rectangle is B bigger." << endl;
     }
    else (areaA = areaB) {
        cout << "Rectangles are the same" << endl;
     }


    return 0;
}