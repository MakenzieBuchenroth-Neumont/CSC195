#include "Employee.h"
#include <iostream>
using namespace std;

char name[32];
unsigned int age = 0;
unsigned int zipcode = 0;
float wage = 0;
unsigned int daysWorked = 0;
int hoursWorkedPerDay[7];
int tax = 0.1f;
int totalHours = 0;
float gIncome = 0;
float nIncome = 0;

Employee::Employee() {
	// put constructor code here
}

void Employee::Read() {
	// put read code here
    cout << "\nEnter your name: ";
    cin >> name;

    cout << "\nEnter your age: ";
    cin >> age;

    cout << "\nEnter your zipcode: ";
    cin >> zipcode;

    cout << "\nEnter the amount of days you worked: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++) {
        cout << "\nEnter hours worked for day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHours += hoursWorkedPerDay[i];
    }

    cout << "\nEnter your wage: ";
    cin >> wage;

    gIncome = (totalHours * wage);
    nIncome = (gIncome - (gIncome * tax));
}

void Employee::Write() {
	// put write code here
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
    cout << "\nZipcode: " << zipcode;
    cout << "\nWage: " << wage;
    cout << "\nDays Worked: " << daysWorked;
    for (int j = 0; j < daysWorked; j++) {
        cout << "\nHours Worked On Day " << j << ": " << hoursWorkedPerDay[j];
    }
    cout << "\nTotal Hours Worked: " << totalHours;
    cout << "\nGross Income: " << gIncome;
    cout << "\nNet Pay: " << nIncome;
    cout << "\n\n";
}
