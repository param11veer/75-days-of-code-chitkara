#include<iostream>
using namespace std;

int main(){
    /*
        !converting binary to decimal
    */

    // int n;
    // int number = n;
    // cout << "Enter the number : ";
    // cin >> n;

    // int answer = 0;
    // int power =1;
    // while(n>0){
    //     int last_digit = n%10; // to extract the last digit
    //     answer += (last_digit*power);
    //     power *= 2;
    //     n /= 10; //to remove the last digit
    // }
    // cout << "The decimal conversion of the entered number is : "<<answer;

    /*
        !converting decimal to binary
    */
    
    int n;
    cout<<"enter a positive integer: ";
    cin >> n;

    int ans = 0;
    int power = 1;

    while(n>0){
        int parity_digit = n%2;
        ans += parity_digit*power;
        power *= 10;
        n /= 2;
    }
    cout << ans << endl;
    
    return 0;
}