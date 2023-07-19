#include <iostream>
#include <math.h>
using namespace std;
// This program will calculate the area of a room in SQ. feet
int main()
{
    int side;
    cout << "Enter the sides of the square: ";
    cin >> side;
    double area = pow(side,2); // Calculate Area using formula (a^2)
    cout << "The area of the square is: " << area << " Square feet" << endl;
    return 0;
}