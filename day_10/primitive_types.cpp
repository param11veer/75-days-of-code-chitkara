#include <iostream>
using namespace std;

int main()
{
    // char middle_initial{'s'};
    // cout << "My middle initial is: " << middle_initial << endl;

    // unsigned short int exam_score{50}; // same as unsigned short exam_score {50}
    // cout << "My exam score is: " << exam_score << endl;

    // int countries_represented{65};
    // cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    // long people_in_florida{20610000};
    // cout << "There are about " << people_in_florida << " people in florida" << endl;

    // long long people_on_earth{7'600'000'000};
    // cout << "There are about " << people_on_earth << " people on earth" << endl;


    /**********************
     * Floating point types
    ***********************/


    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159};
    cout << "Value of PI is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;



    /***********************
     * Boolean type
    *************************/




    bool gameOver {false};
    cout << "The value of game over is " << gameOver << endl;
    
    
    /*************************
     * Overflow example
    **************************/


   short value1 {30000};
   short value2 {1000};
   short sum {value1*value2};
   cout << "The sum of " << value1 << " and " << value2 << " is " << sum << endl;
    
    
    
    return 0;
}