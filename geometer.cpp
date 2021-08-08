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
    cout << "      A    " << endl;
    cout << "  ---------" << endl;
    cout << "  |       |" << endl;
    cout << "A |       | A" << endl;
    cout << "  |       |" << endl;
    cout << "  ---------" << endl;
    cout << "      A (Edge of square)    " << endl;
    cout << endl << "Perimeter of square: 4*A" << endl;
    cout << endl << "Area of square: A*A" << endl;
    cout << endl << "Measurement unit: Meter" << endl;
}

void calculateSquare()
{
    showSquare();

    double squareEdge, squarePeri, squareArea;

    cout << "\nEnter the edge of the square: ";
    cin >> squareEdge;

    squarePeri = 4 * squareEdge;

    squareArea = squareEdge * squareEdge;

    cout << "\nPerimeter of the square: " << squarePeri << endl;
    cout << "\nArea of the square: " << squareArea << endl;

    runMenu();
}

void showTriangle()
{
    cout << "     /\\   " << endl;
    cout << "    /| \\      \"A\" is the edge of the triangle." << endl;
    cout << "   / |  \\     \"B\" is the base of the triangle." << endl;
    cout << "A /  |h  \\ C  \"C\" is the other edge of the triangle." << endl;
    cout << " /   |    \\   \"h\" is the height of the triangle." << endl;
    cout << "/    |     \\" << endl;
    cout << "-------------" << endl;
    cout << "      B      " << endl;
    cout << endl << "Perimeter of triangle: A+B+C" << endl;
    cout << endl << "Area of triangle: (B*h)/2" << endl;
    cout << endl << "Measurement unit: Meter" << endl;
}

void calculateTriangle()
{
    showTriangle();

    double triA, triB, triC, triH, triPeri, triArea;

    cout << "\nEnter the edge of the triangle: ";
    cin >> triA;

    cout << "\nEnter the base of the triangle: ";
    cin >> triB;

    cout << "\nEnter the other edge of the triangle: ";
    cin >> triC;

    cout << "\nEnter the height of the triangle: ";
    cin >> triH;

    triPeri = triA + triB + triC;

    triArea = ((triB*triH) / 2);

    cout << "\nPerimeter of the triangle: " << triPeri << endl;
    cout << "\nArea of the triangle: " << triArea << endl;

    runMenu();
}

void showRectangle()
{
    cout << "           A          " << endl;
    cout << "  --------------------" << endl;
    cout << "  |                  |" << endl;
    cout << "B |                  | B (Short edge of rectangle)" << endl;
    cout << "  |                  |" << endl;
    cout << "  --------------------" << endl;
    cout << "           A (Long edge of rectangle)    " << endl;
    cout << endl << "Perimeter of rectangle: (2*A)+(2*B)" << endl;
    cout << endl << "Area of rectangle: A*B" << endl;
    cout << endl << "Measurement unit: Meter" << endl;
}

void calculateRectangle() 
{
    showRectangle();

    double rectShort, rectLong, rectPeri, rectArea;

    cout << "\nEnter the short edge of the rectangle: ";
    cin >> rectShort;

    cout << "\nEnter the long edge of the rectangle: ";
    cin >> rectLong;

    rectPeri = (2 * rectShort) + (2 * rectLong);

    rectArea = rectShort * rectLong;

    cout << "\nPerimeter of the rectangle: " << rectPeri << endl;
    cout << "\nArea of the rectangle: " << rectArea << endl;

    runMenu();
}