#include <iostream>
using namespace std;
int age{18}; // global variable
// any variable beyond the scope of main function is a global variable
int main()
{
    cout << "Your age is: " << age << endl;
    return 0;
} 