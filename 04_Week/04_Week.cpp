// 04_Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "myInput.h"
#include "Animal.h"
#include "Database.h"
using namespace std;

int main()
{
    myInput input;
    std::unique_ptr<Animal> animal;
    Database db;

    std::cout << "04_Week Hello World!\n";

    int iMenu = 0;

    while (iMenu != 6) {
        cout << "\nEnter a menu option: ";
        cout << "\n1) Add an animal";
        cout << "\n2) Display all animals";
        cout << "\n6) Quit\n";

        iMenu = input.getUserInt(1, 6);
        switch (iMenu) {
        case 1:
            int iType = 0;
            cout << "\n1) Fish";
            cout << "\n2) Bird";
            iType = input.getUserInt(1, 2);
            switch (iType) {
            case 1:
                animal = db.create(Animal::eType::Fish);
                break;
            case 2:
                animal = db.create(Animal::eType::Bird);
                break;
            } //Inner case
            animal->read(cout, cin);
            db.add(animal);
            break;
        case 2:

            break;
        } // Outer switch
    } // While 
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
