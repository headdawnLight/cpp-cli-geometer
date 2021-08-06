// Geometer programming with C++ on MS Visual Studio 2019
// geometer.cpp
#include <iostream>
using namespace std;

void DrawRectangle()
{
    cout << "--------------------" << endl;
    cout << "|                  |" << endl;
    cout << "|                  | B(Short edge)" << endl;
    cout << "|                  |" << endl;
    cout << "--------------------" << endl;
    cout << "    A(Long edge)    " << endl;
    cout << endl << "Perimeter of rectangle: (2*A)+(2*B)" << endl;
    cout << endl << "Area of rectangle: A*B" << endl;
    cout << endl << "Measurement unit: Metric" << endl;
}
int main()
{
    DrawRectangle();

	double rectShort, rectLong, rectPeri, rectArea;
	
		cout << "\nEnter the short edge of the rectangle: ";
		cin >> rectShort;
		cout << "\nEnter the long edge of the rectangle: ";
		cin >> rectLong;

        rectPeri = (2 * rectShort) + (2 * rectLong);

        rectArea = rectShort * rectLong;

        cout << "\nPerimeter of the rectangle:" << rectPeri << endl;
        cout << "\nArea of the rectangle:" << rectArea << endl;

        return 0;
}