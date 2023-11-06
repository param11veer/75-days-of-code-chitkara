#include <iostream>
using namespace std;

//int main()
//{
    /*
        !Static Objects
    */
    // class Myclass
    // {
    // public:
    //     Myclass()
    //     {
    //         cout << "Inside Constructor\n";
    //     }
    //     ~Myclass() { cout << "Inside Destructor\n"; }
    // };
    // int x = 0;
    // if (x == 0)
    // {
    //     static Myclass obj;
    // }
    // cout << "End of main\n";

    //return 0;
//}

    
/*
        !Static Members
*/
// class Employees{
//     public:
//     static int total;
//     Employees() {total += 1;}
// };
// int Employees::total = 0;
// int main(){
//     Employees e1;
//     cout << "Number of employees: "<<e1.total<<endl;
//     Employees e2;
//     cout << "Number of employees: "<< e2.total<<endl;
//     Employees e3;
//     cout << "Number of employees: " << e3.total<< endl;
// }

/*
    *Create three classes by name Day, Month and year to store the day of the month,
    *month in two digits and year in four digits, respectively, from the user.
    *Now print the entire as "dd-mm-yyyy" in main() function.
*/

// class Day {
// public:
//     int getDay() {
//         int day;
//         cin >> day;
//         cout << "Enter the day of the month (1-31): ";
//         return day;
//     }
// };

// class Month {
// public:
//     int getMonth() {
//         int month;
//         cout << "Enter the month in two digits (01-12): ";
//         cin >> month;
//         return month;
//     }
// };

// class Year {
// public:
//     int getYear() {
//         int year;
//         cout << "Enter the year in four digits (0000-9999): ";
//         cin >> year;
//         return year;
//     }
// };

// int main() {
//     Day d;
//     Month m;
//     Year y;

//     cout << d.getDay() << "-" << m.getMonth() << "-" << y.getYear() << endl;

//     return 0;
// }

/*
    *Create a class called "bankAccount" and initialize the balance(must be private) with Rs.2000.
    *Now create two member functions called "withdraw()" and "deposit()" to withdraw and deposit the amount,
    *respectively. These functions should accept the amount as a parameter.
    *Create another member function called "ShowBalance()" to display the balance after every withdrawal and deposit transaction.
    *
*/


// class BankAccount {
// private:
//     int balance;

// public:
//     BankAccount() : balance(2000) {}

//     void withdraw(int amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//         } else {
//             cout << "Invalid withdrawal amount." << endl;
//         }
//     }

//     void deposit(int amount) {
//         if (amount > 0) {
//             balance += amount;
//         } else {
//             cout << "Invalid deposit amount." << endl;
//         }
//     }

//     void showBalance() const {
//         cout << "Your current balance is: Rs." << balance << endl;
//     }
// };

// int main() {
//     BankAccount account;

//     account.withdraw(500);
//     account.showBalance();

//     account.deposit(1000);
//     account.showBalance();

//     return 0;
// }


/*
    *(use of Static)
    *Create a class Table to print the table of a number passed as a constructor parameter.
    *At the end display total no. of objects created of that class?
*/


class Table {
private:
    static int count; // count of objects created
    int number;

public:
    Table(int num) : number(num) {
        ++count;
    }

    void printTable() const {
        for (int i = 1; i <= 10; ++i) {
            cout << number << " * " << i << " = " << number * i << endl;
        }
    }

    static int getCount() {
        return count;
    }
};

int Table::count = 0;

int main() {
    Table t1(5);
    t1.printTable();

    Table t2(10);
    t2.printTable();

    cout << "Total no. of objects created: " << Table::getCount() << endl;

    return 0;
}