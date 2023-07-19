#include <iostream>
using namespace std;
// if we dont use this line here we have to use std:: before every cout cin and endl

int main()
{
    int fav_number;
    cout << "Enter your favorite number ";
    cin >> fav_number;
    cout << "Amazing!! That's my favorite number too!" << endl;
    cout << "No really!!, " << fav_number
         << " is my favorite number!" << endl;

    return 0;
}