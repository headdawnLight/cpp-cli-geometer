// Geometer programming with C++ on MS Visual Studio 2019
// geometer.cpp

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void showMenu();
void runMenu();
void showSquare();
void calculateSquare();
void showTriangle();
void calculateTriangle();
void showRectangle();
void calculateRectangle();

char main()
{   
    string Menu = "Welcome to GEOMETER!";
    cout << Menu << endl;
    runMenu();
    return 0;
}

void showMenu() {
    cout << "\nPress \"1\" for SQUARE." << endl;
    cout << "Press \"2\" for TRIANGLE." << endl;
    cout << "Press \"3\" for RECTANGLE." << endl;
}

void runMenu() 
{
        showMenu();

        short choice;

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            calculateSquare();
        }
        else if (choice == 2) {
            calculateTriangle();
        }     
        else if (choice == 3) {
            calculateRectangle();
        }   
        else {
            runMenu();
        }        
}

void showSquare()
{
    cout << "--------------------" << endl;
}

void calculateSquare()
{
    cout << "--------------------" << endl;
    runMenu();
}

void showTriangle()
{
    cout << "--------------------" << endl;
}

void calculateTriangle()
{
    cout << "--------------------" << endl;
    runMenu();
}

void showRectangle()
{
    cout << "--------------------" << endl;
    cout << "|                  |" << endl;
    cout << "|                  | B(Short edge)" << endl;
    cout << "|                  |" << endl;
    cout << "--------------------" << endl;
    cout << "    A(Long edge)    " << endl;
    cout << endl << "Perimeter of rectangle: (2*A)+(2*B)" << endl;
    cout << endl << "Area of rectangle: A*B" << endl;
    cout << endl << "Measurement unit: Meter" << endl;
}

void calculateRectangle() 
{
    showRectangle();

    int rectShort, rectLong, rectPeri, rectArea;

    cout << "\nEnter the short edge of the rectangle: ";
    cin >> rectShort;

    cout << "\nEnter the long edge of the rectangle: ";
    cin >> rectLong;

    rectPeri = (2 * rectShort) + (2 * rectLong);

    rectArea = rectShort * rectLong;

    cout << "\nPerimeter of the rectangle:" << rectPeri << endl;
    cout << "\nArea of the rectangle:" << rectArea << endl;

    runMenu();
}