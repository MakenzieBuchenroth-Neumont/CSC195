// 1-3_DataTypes_Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <iostream>

int main()
{
    const unsigned short maxDays = 6;
    const float tax = 0.1f;

    string name; // get name

    unsigned int daysWorked = 0; // get - days worked
    unsigned short hours[maxDays]; // get days hours
    int hoursWorked = 0;
    float fGrossPay = 0; // calc - total hours * wage
    float fNetPay = 0; // calc (after taxes)
    float fWage = 0; // get wage (pay per hour)
    

    cout << "\nEnter your name: ";
    cin >> name;

    cout << "\nEnter the amount of days you worked: ";
    cin >> daysWorked;

    for (int i = 1; i <= daysWorked; i++) {
        cout << "\nEnter the amount of hours your worked on the " << i << "st/rd day: ";
        cin >> hours[i];
        hoursWorked += hours[i];
    }

    cout << "\nEnter your wage: ";
    cin >> fWage;

    // Calc pay and taxes

    fGrossPay = hoursWorked * fWage;

    cout << "\nYour gross pay is: " << fGrossPay;

    fNetPay = fGrossPay - (fGrossPay * tax);

    cout << "\nYour net pay is: " << fNetPay;


    cout << "\n End of App";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
