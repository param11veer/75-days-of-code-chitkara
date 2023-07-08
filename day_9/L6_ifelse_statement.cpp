// Basic if-else code

 #include <iostream>
 using namespace std;

int main()
{
    int marks;
    cout << "Enter you marks: ";
    cin >> marks;
    if (marks > 33)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}




/* Print ODD if the input value is odd, otherwise print EVEN*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "The number you have entered is an Even number";
    }
    else
    {
        cout << "The number you have entered is an ODD number";
    }

    return 0;
}




/*WAP to determine the age grp of people*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the AGE : ";
    cin >> age;
    if (age < 12)
    {
        cout << "CHILD" << endl;
    }
    else if (age > 18)
    {
        cout << "ADULT" << endl;
    }
    else
    {
        cout << "Teenager" << endl;
    }

    return 0;
}




/*Switch case*/

#include<iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter the day : " << endl;
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
    }
    return 0;
}


/*Wap using switch to tell a word is consonant or a vowel*/

#include<iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter an Alphabet: " << endl;
    cin >> character;
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
            break;
    }
    return 0;
}