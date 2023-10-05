#include <iostream>
using namespace std;
int main()
{
    /*
     *print numbers from 1 to n
     */

    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     cout << i << endl;
    // }

    /*
     *print all the even numbers from 1 to 100
     */

    // int n;
    // cout << "Enter the number : ";
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     if (i%2 == 0){
    //         cout << i << endl;
    //     }
    // }

    /*
     *print the table of n number
     */

    // int n;
    // cout<<"enter a number: "<<endl;
    // cin >> n;

    // for(int i=1; i<=10; i++){
    //     cout<<n*i<<endl;
    // }

    /*
     *display this AP - 1,3,5,7,9...upto n
     */

    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;

    // for(int i=1; i<=(2*n-1); i=i+2){
    //     cout << i << endl;
    // }

    /*
     *Display this GP - 1,2,4,8,16,32.....n
     */

    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // int GP = 2;
    // int product = 1;
    // for(int i =1; i<=n; i++){
    //     product = product*GP;
    //     cout << product<<endl;
    // }

    /*
     *Display this AP - 100, 97, 94...upto all positive numbers
     */

    // for(int i=100; i>=0; i = i-3){
    //     cout << i << endl;
    // }

    /*
     *Display this GP - 100, 50, 25,...upto n
     */

    int n;
    cout << "Enter the Value Of N : ";
    cin >> n;
    int a = 100;
    cout << a << endl;
    for(int i=1; i<=n; i++){
        float num = 2;
        float output = a/num;
        cout << output << endl;
        a = a/num;
    }

    /*
     *Check whether a number is a prime number or not
     */

    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool flag = true;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag == false){
        cout << "The entered number is not prime";
    }
    else{
        cout<<"Entered Number Is Prime"<<endl;
    }

    /*
     *WAP to print odd numbers from1 to 100
     */

    // int n;
    // cout << "Enter the number : ";
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     if (i % 2 != 0) {
    //         cout << i << endl;
    //     }
    // }

    /*
        !WAP to count the digits of a given number
    */

    // int n;
    // cout << "Enter the number : ";
    // cin >> n;
    // int count = 0;

    // while (n != 0)
    // {
    //     n = n/10;
    //     count++;
    // }
    // cout << "The no. of digits are " << count << endl;
    
    /*
        !WAP to print sum of the digits of the number
    */

    int n;
    cout << "Enter the number : ";
    cin >> n;
    int sum = 0;

    while (n != 0){
        sum += n%10 ;
        n = n/10;
    }
    cout << "The sum of the digits of the number is : " << sum << endl;
    
    /*
        !WAP to print sum of all the even digits of the given number
    */
    
    // int n;
    // cout << "Enter the number : ";
    // cin >> n;
    // int sum = 0;

    // while (n!=0){
    //     if ((n%10)%2 == 0 ){
    //         sum+=((n%10));
    //     }
    //     n=n/10;
    // }
    // cout << "THe sum of the even digits in the given number is : " << sum << endl;
    

    /*
        !WAP to print the reverse of a given number and store it
    */

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int r = 0;
    while(n!=0){
        r = r*10;
        r = r + (n%10);
        n = n/10;
    }
    cout << "The reversed number is : " << r << endl;

    /*
        !WAP to print the sum of 1 -2 + 3 - 4 + 5 - 6.....upto n terms
    */

    // int n;
    // cout<<"Enter the value of n : ";
    // cin >> n;
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     if (i%2==0){
    //         sum -= i;
    //     }
    //     else{
    //         sum += i;
    //     }
    // }
    // cout << "The sum of the series upto n terms is : "<<sum<<endl;
    
    /*
        !Wap to print the factorial of a given number n.
    */

    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;

    // int product = 1;
    // for(int i=1; i<=n; i++){
    //     product *= i;
    // }
    // cout << "The factorial of " << n << " is : "<<product<<endl;
    
    
    /*
        !Wap to print the nth fibonacci number
    */

    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // int a = 1;
    // int b = 1;
    // int sum = 0;
    // for(int i=1; i<=(n-2); i++){ //using (n-2) as limit because hmne pehle hi a and b ki value set kr rkhi h
    //     sum = a + b;
    //     a = b;
    //     b = sum;
    // }
    // cout << "The Fibonacci number of " << n << " is : " << sum << endl;
    
    /*
        !Wap to print value of one number raised to another
    */
    int n;
    int r;
    cout << "Enter the value of n : ";
    cin >> n;
    cout<<"Enter the power: ";
    cin >> r;
    int product = 1;
    for(int i=1; i<=r; i++){
        product *= n;
    }
    cout << "The value of " << n << " raised to power " << r << " is " << product << endl;


    /*
        !WAP to print all ASCII values and their equivalent characters of 26 alphabets using loop
    */  

    //*TYPECASTING
    // int x = 65;
    // cout << x << endl;
    // char ch = (char)x;
    // cout << ch << endl;
    // char h = 'A';
    // cout << ch << endl;
    // int c = (int)h;
    // cout << x;
    for(int i=65; i<=90;i++){
        cout<<((char)(i))<<" "<<i << endl;
    }
    
    
    
    return 0;
}