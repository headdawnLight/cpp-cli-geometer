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

char main() // Works with nested global void functions.
{   
    string Menu = "---Welcome to GEOMETER!";
    cout << Menu << endl;
    runMenu();
    return 0;
}

void showMenu() // Two-dimensional geometric shapes via command line interface.
{
    cout << "\n-->Press \"1\" for SQUARE." << endl;
    cout << "-->Press \"2\" for TRIANGLE." << endl;
    cout << "-->Press \"3\" for RECTANGLE." << endl;
}

void runMenu() // Runs the choice and shows the menu every time.
{
    showMenu();

    int choice;

        cout << "\n-->Enter your choice: ";
        cin >> choice;
        cout << "\n" << endl;

        if (choice < 1 || choice > 3)
        {
            cout << "---An invalid choice! Choose again!" << endl << endl;
            runMenu();
        }
       
        if (choice == 1)
        {
            calculateSquare();
        }
        else if (choice == 2)
        {
            calculateTriangle();
        }
        else if (choice == 3)
        {
            calculateRectangle();
        }
        else {
            runMenu();
        }
}

void showSquare() // Shows two-dimensional square and its geometric formulas.
{
    cout << "         A    " << endl;
    cout << "     ---------" << endl;
    cout << "     |       |" << endl;
    cout << "   A |       | A" << endl;
    cout << "     |       |" << endl;
    cout << "     ---------" << endl;
    cout << "         A (Edge of square)    " << endl << endl;
    cout << "   Perimeter of square: 4*A" << endl << endl;
    cout << "   Area of square: A*A" << endl;
}

void calculateSquare()  // Calculates the perimeter and area of square.
{
    showSquare();

    double squareEdge, squarePeri, squareArea;

    cout << "\n-->Enter the edge of the square: ";
    cin >> squareEdge;

    squarePeri = 4 * squareEdge;

    squareArea = squareEdge * squareEdge; 

    cout << "\n---Perimeter of the square: " << squarePeri << " meters or etc." << endl;
    cout << "\n---Area of the square: " << squareArea << " square meters or etc." 
         << endl << endl << endl;
        
    runMenu();
}

void showTriangle() // Shows two-dimensional triangle and its geometric formulas.
{
    cout << "        /\\   " << endl;
    cout << "       /| \\      \"A\" is the edge of the triangle." << endl;
    cout << "      / |  \\     \"B\" is the base of the triangle." << endl;
    cout << "   A /  |h  \\ C  \"C\" is the other edge of the triangle." << endl;
    cout << "    /   |    \\   \"h\" is the height of the triangle." << endl;
    cout << "   /    |     \\" << endl;
    cout << "   -------------" << endl;
    cout << "         B      " << endl << endl;
    cout << "   Perimeter of triangle: A+B+C" << endl << endl;
    cout << "   Area of triangle: (B*h)/2" << endl;
}

void calculateTriangle() // Calculates the perimeter and area of triangle.
{
    showTriangle();

    double triA, triB, triC, triH, triPeri, triArea;

    cout << "\n-->Enter the edge of the triangle: ";
    cin >> triA;

    cout << "\n-->Enter the base of the triangle: ";
    cin >> triB;

    cout << "\n-->Enter the other edge of the triangle: ";
    cin >> triC;

    cout << "\n-->Enter the height of the triangle: ";
    cin >> triH;

    triPeri = triA + triB + triC;

    triArea = ((triB*triH) / 2);

    cout << "\n---Perimeter of the triangle: " << triPeri << " meters or etc." << endl;
    cout << "\n---Area of the triangle: " << triArea << " square meters or etc."
         << endl << endl << endl;

    runMenu();
}

void showRectangle() // Shows two-dimensional rectangle and its geometric formulas.
{
    cout << "              A          " << endl;
    cout << "     --------------------" << endl;
    cout << "     |                  |" << endl;
    cout << "   B |                  | B (Short edge of rectangle)" << endl;
    cout << "     |                  |" << endl;
    cout << "     --------------------" << endl;
    cout << "              A (Long edge of rectangle)" << endl << endl;
    cout << "   Perimeter of rectangle: (2*A)+(2*B)" << endl << endl;
    cout << "   Area of rectangle: A*B" << endl;
}

void calculateRectangle() // Calculates the perimeter and area of rectangle.
{
    showRectangle();

    double rectShort, rectLong, rectPeri, rectArea;

    cout << "\n-->Enter the short edge of the rectangle: ";
    cin >> rectShort;

    cout << "\n-->Enter the long edge of the rectangle: ";
    cin >> rectLong;

    rectPeri = (2 * rectShort) + (2 * rectLong);

    rectArea = rectShort * rectLong;

    cout << "\n---Perimeter of the rectangle: " << rectPeri << " meters or etc." << endl;
    cout << "\n---Area of the rectangle: " << rectArea << " square meters or etc."
         << endl << endl << endl;

    runMenu();
}