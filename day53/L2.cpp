#include <iostream>
using namespace std;

int main()
{
    /*
        int a,b;
        cin >> a >> b ;
        cout << "Value of a and b is : " << a << ", " << b << endl;
    */

    /*
         int a;
        a = cin.get();
        cout << "Value of a is : " << a << endl;
        // it basically prints the ASCII value of the given input
        // it first convert it into character and prints its value on ASCII table
    */


    /*
         SWITCH CASE
    */

   /*
        int day;
        cin >> day;

        switch (day)
        {
            case 1:
                cout << "Monday" << endl;
                break;

            case 2:
                cout << "Tuesday" << endl;
                break;

            case 3:
                cout << "Wednesday" << endl;
                break;

            case 4:
                cout << "Thursday" << endl;
                break;

            case 5:
                cout << "Friday" << endl;
                break;

            case 6:
                cout << "Saturday" << endl;
                break;

            case 7:
                cout << "Sunday" << endl;
                break;

            default:
                cout << "Invalid Day";
        }
    */


   /*
        WAP TO CHECK FOR VOWELS AND CONSONANT
   */

    char character;
    cin>>character;

    switch (character)
    {
        case 'a':
            cout << "Vowel" << endl;
            break;
        
        case 'e':
            cout << "Vowel" << endl;
            break;
        
        case 'i':
            cout << "Vowel" << endl;
            break;
        
        case 'o':
            cout << "Vowel" << endl;
            break;
        
        case 'u':
            cout << "Vowel" << endl;
            break;

        default:
            cout << "Consonant" << endl;
    }      

    return 0;
}