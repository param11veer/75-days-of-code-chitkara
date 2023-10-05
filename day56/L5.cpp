#include <iostream>
using namespace std;
int main()
{
    /*
     *Count the number of digits for a given number n
     */

    
    int n;
    cout << "Enter the digit : ";
    cin >> n;

    int digits = 0;
    while(n>0){
        digits++;
        n=n/10;
    }
    cout << "The number of digits in n are : " << digits ;
    

    /*
     *Find the sum of digits in a given number n
     */

    
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int sum = 0;
    while(n>0){
        int last_digit = n%10;
        sum += last_digit;
        n/=10;
    }
    cout << "The sum of the digits entered is : " <<sum << endl;
    

    /*
     *Reverse the digits of the number
     */

    
    int n;
    cout << "Enter the number : ";
    cin >> n;


    int reverse = 0;
    while(n>0){
        int last_digit= n%10;
        reverse = reverse*10 + last_digit;
        n/=10;
    }
    cout << "The reverse of the number you entered is : " << reverse << endl;
    

    /*
     *Find the sum of the following series
     * s = 1 - 2 + 3 - 4 .... n
     */

    
    int n;
    cout << "Enter the number : ";
    cin>>n;

    int result = 0;
    for(int i=1; i<=n; i++){
        if (i%2==0){
            result-=i;
        }
        else{
            result+=i;
        }
    }
    cout << "The sum of the series upto the given number is : " << result;
    

    /*
     *Print the first n factorial numbers
     */

    
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial*=i;
        cout << "The factorial of " <<i<< " is " << factorial << endl;
    }
    

    /*
     *given two numbers a and b find a raised to power b
     */

    
    int a,b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    int power = 1;
    for(int i=1; i<=b; i++){
        power = power*a;
    }
    cout<<power;
    
    return 0;
}