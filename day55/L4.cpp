#include <iostream>
using namespace std;

int main()
{
    /*
     * WAP to print solid rectangle/square
     */

    
     int n,m;
     cout<<"Enter the number of rows: ";
     cin>>n;
     cout << "Enter the number of columns: ";
     cin >> m;
     for(int i=1; i<=n; i++){
         for(int j=1; j<=m; j++){
             cout<<"* ";
         }
         cout<<endl;
     }
     

    /*
     * HOLLOW RECTANGULAR PATTERN
     */

    
    int n,m;
    cout<<"Enter the number of Rows: "<<endl;
    cin >> n;
    cout << "Enter the number of Columns: "<<endl;
    cin >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if (i==1 || j ==1 || i==n || j==m){
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout << endl;
    }
    

    /*
     * right angle triangle
     */

    
    int n;
    cout <<"Enter the value of N : ";
    cin >> n ;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    

    /*
     * Inverted Right angle triangle
     */

    
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
    

    /*
     *Solid triangle
     */

    
    int n;
    cout<<"Enter the Number Of Rows: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<= (n-i); j++){
            cout << "  ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout << "* ";
        }
        cout<<endl;
    }
    

    /*
     *Numerical Rectangular pattern
     */

    
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=(n); j++){
            cout << j;
        }
        for(int j=1; j<=(i-1); j++){
            cout << j;
        }
        cout << endl;
    }
    

    
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    

    /*
     *Hollow number rectangle*square
     */

    
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n){
                cout << j << " ";
            }
            else{
                if(j==1){
                    cout << j << " ";
                }
                else if (j==n){
                    cout << j << " ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    

    /*
        *print a pattern like
        ! 12121212
        ! 21212121
        ! 12121212
        ! 21212121
    */

    
    int n,m;
    cout << "Enter the value of rows : ";
    cin >> n;
    cout << "Enter the value of columns : ";
    cin >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if((i+j)%2==0){
                cout << "1 ";
            }
            else{
                cout << "2 ";
            }
        }
        cout << endl;
    }
    

    /*
     *Numerical triangular pattern
     */

    
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
    

    
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int j=(i-1); j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
    

    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int num = 1;
    int spaces = rows - 1;

    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int j = 1; j <= spaces; ++j) {
            cout << " ";
        }

        // Print numbers
        for (int j = 1; j <= 2 * i - 1; ++j) {
            // Print the first and last column
            if (j == 1 || j == 2 * i - 1) {
                cout << num;
            }
            // Print spaces for the hollow part
            else {
                cout << " ";
            }
        }

        cout << endl;

        // Decrease spaces for the next row
        --spaces;
        // Increment the number for the next row
        num++;
    }

    return 0;
}