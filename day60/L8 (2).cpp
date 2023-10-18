/*
    !Declaring a function
        *return_type function_name(parameter1, parameter2...){
        *    statements;
        *}
*/   
#include<iostream>
#include<math.h>
using namespace std;

// void greet(){
//     cout<<"Hello World!"<<endl;
//     cout<<"Hi"<<endl;
//     return;
// }
// int main(){
//     greet();
//     greet();
//     return 0;
// }


// int minimum(int a, int b){
//     int min = a;
//     if(b<a) min = b;
//     return min;
// }
// int main(){
//     int n;
//     cout << "Enter the number of lines : " << endl;
//     cin >> n;
//     int min = 0;
//     for(int i=1; i<=2*n-1; i++){
//         for(int j=1; j<=2*n-1; j++){
//             int a = i;
//             if(i>n) a = 2*n - i;
//             int b = j;
//             if(b>n) b = 2*n - j;
//             min = minimum(a,b);
//             cout << n+1-min;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// int add(int a, int b){
//     return a+b;
// }

// int main(){
//     int a,b;
//     cout << "Enter the value of the first number : ";
//     cin >> a;
//     cout << "Enter the value of the second number : ";
//     cin >> b;
//     int sum = add(a,b);
//     cout << sum;
//     return 0;
// }

/*
    !SQRT function
    !pow function
    !min function
    !max function
*/

// int main(){
//     int a;
//     cout << "Enter a number : ";
//     cin >> a;
//     double sqrt_val = sqrt(a);
//     cout << "Square root of the given number " << a << " is " << sqrt_val << endl;
//     int power = pow(a,2);
//     cout << "given number raised to the power of 2 = " << power << endl;
//     int minimum = min(10, 9);
//     cout << "Smallest number among the two given number is : " << minimum << endl;
//     int maximum = max(100, 10);
//     cout << "greatest number among the two given number is : " << maximum << endl;
//     return 0;
// }

/*
    !Solve NcR i.e: nFactorial/(rFactorial*(n-rFactorial))
*/

// int factorial(int x){
//     int fact = 1;
//     for(int i=2; i<=x; i++){
//         fact *= i;
//     }
//     return fact;
// }v 
// int main(){
//     int n,r;
//     cout << "Enter the value of n : ";
//     cin >> n;
//     cout << "Enter the value of r : ";
//     cin >> r;
//     int nFact = factorial(n); //n!
//     int rFact = factorial(r); // r!
//     int nrFact = factorial(n-r); // n-r!

//     int NcR = nFact/(rFact*nrFact);
//     cout << NcR;
//     return 0;
// }


/*
    !print pascal triangle
    *pascal triangle is simply a triangle made of nCr basically n is the number of rows and r is number of columns
*/

// int factorial(int x){
//     int fact = 1;
//     for(int i=2; i<=x; i++){
//         fact *= i;
//     }
//     return fact;
// }
// int combination(int n, int r){
//     int NcR = factorial(n)/(factorial(r)*factorial(n-r));
//     return NcR;
// }
// int main(){
//     int n,r;
//     cout << "Enter the value of n : ";
//     cin >> n;
//     int count = n;
//     for(int i=0; i<=n; i++){
//         for(int k=0; k<=count; k++){
//             cout << " ";
//         }
//         for(int j=0; j<=i; j++){
//             int iCj = combination(i,j);
//             cout << iCj << " ";
//         }
//         cout << endl;
//         count = count - 1;
//     }
//     return 0;
// }



/*
    !swap 2 numbers
*/

// void swap(int a, int b){
//     // int temp;
//     // temp = a;
//     // a = b;
//     // b = temp;
//     // cout << a << endl;
//     // cout << b;
//     /*
//         TODO: solving without using any 3rd variable
//     */
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout << a << endl;
//     cout << b;
// }

// int main(){
//     int a,b;
//     cout << "Enter the first number : ";
//     cin >> a;
//     cout << "Enter the second number : ";
//     cin >> b;
//     swap(a,b);
//     return 0;
// }


/*
    !print the circumference of the circle
*/

// #include<iostream>
// using namespace std;

// int square(int r){
//     return r*r;
// }
// double circumference(int r){
//     return 2*3.14*r;
// }

// double area(int r){
//     return 3.14*square(r);
// }
// int main(){
//     int r;
//     cout << "Enter the value of Radius : ";
//     cin >> r; 
//     cout << "The area of the circle is : " << area(r)<<endl;
//     cout << "The circumference of the circle is : " << circumference(r);
//     return 0;
// }


/*
    !Wap to check if a person is eligible to vote or not
*/

// #include<iostream>
// using namespace std;

// bool isEligibleToVote(int age){
//     if (age>=18 && age<=75) {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int age;
//     cout << "Enter your age : ";
//     cin >> age;

//     if (isEligibleToVote(age)) {
//         cout << "You are eligible to vote.";
//     }
//     else{
//         cout << "You are not eligible to vote";
//     }
//     return 0;
// }


/*
    !wap to print all the odd numbers between a given range of numbers
*/

// #include<iostream>
// using namespace std;

// // void oddnumber(int n){
// //     for(int i=1; i<=n; i++){
// //         if(i%2!=0){
// //             cout << i << " ";
// //         }
// //     }
// // }
// // int main(){
// //     int n;
// //     cout << "Enter a number : ";
// //     cin >> n;
// //     oddnumber(n);
// //     return 0;
// // }

// bool isOdd(int num){
//     if(num%2!=0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         if(isOdd(i)){
//             cout << i << " ";
//         }
//     }
//     return 0;
// }


/*
    !wap to print all the prime numbers
*/

#include<iostream>
using namespace std;

bool checkPrime(int n) {
    int factors = 0;
    if (n == 1 || n == 0){
        return false;
    }
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            factors ++;
        }
    }
    if(factors==1){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(checkPrime(i)){
            cout << i << " ";
        }
    }
}