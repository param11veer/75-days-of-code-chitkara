#include <iostream>
using namespace std;

int main()
{
    /*
        !print a solid rectangle
    */

    // int n,m;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // cout << "ENter the number of columns : ";
    // cin >> m;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    /*
        !print the number square
    */

    // int n,m;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // cout << "Enter the limit of number to be printed : ";
    // cin >> m;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         cout<<j<<" ";
    //     }
    //     cout << endl;
    // }

    /*
        !Print star triangle
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout << endl;
    // }

    /*
        !print star triangle upside down
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int count = n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=count; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    //     --count;
    // }

    /*
        !print number triangle
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    /*
        !print number triangle up-side down
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int count = n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=count; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    //     --count;
    // }

    /*
        !print odd number triangle
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int count = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=count; j=j+2){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    //     count = count + 2;
    // }

    /*
        !print alphabet square
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int limit = 65+(n-1);
    // for(int i=1; i<=n; i++ ){
    //     for(int j=65; j<=limit; j++){
    //         cout << (char)j << " ";
    //     }
    //     cout << endl;
    // }

    /*
        !print alphabet triangle
    */

    // int n;
    // cout<<"Enter the number of rows : ";
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     int limit = 65;
    //     for(int j=1; j<=i; j++){
    //         cout << (char)limit << " ";
    //         ++limit;
    //     }
    //     cout << endl;
    // }

    /*
        !alphabet and number triangle
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     int limit = 65;
    //    for (int j=1; j<=i; j++){
    //         if(i%2!=0){
    //             cout << j << " ";
    //         }
    //         else{
    //             cout << (char)limit << " ";
    //             ++limit;
    //         }
    //     }
    //     cout << endl;
    // }

    /*
        !star plus
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % 2 != 0)
    //     {
    //         for (int j = 1; j <= n; j++)
    //         {
    //             if (j == ((n / 2) + 1))
    //             {
    //                 cout << "* ";
    //             }
    //             else if (i == ((n / 2) + 1))
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //         cout << endl;
    //     }
    //     else
    //     {
    //         for (int j = 1; j < n; j++)
    //         {
    //             if (j == ((n / 2)))
    //             {
    //                 cout << "* ";
    //             }
    //             else if (i == ((n / 2)))
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //         cout << endl;
    //     }
    // }

    /*
        !print hollow rectangle
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(i==1 || i==n){
    //             cout << "* ";
    //         }
    //         else if (j==1 || j==n){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout << endl;
    // }


    /*
        !print star cross
    */
    
    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(i==j || (i+j)==(n+1)){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    /*
        !print the Floyd's triangle
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int count = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << count << " ";
    //         ++count;
    //     }
    //     cout<<endl;
    // }

    /*
        !0's and 1's triangle
    */
    // int n;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // int count;

    // for(int i=1; i<=n; i++){
    //     if(i%2!=0){
    //         count = 1;
    //     }
    //     else{
    //         count = 0;
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout << count <<" ";
    //         if(count==0){
    //             count = 1;
    //         }
    //         else {
    //             count = 0;
    //         }
    //     }
    //     cout << endl;
    // }


    /*
        !print star triangle
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout << "  ";
    //     }
    //     for(int k=1; k<=i; k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    /*
        !print a rhombus
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout << "  ";
    //     }
    //     for(int k=1; k<=n; k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    /*
        !print alphabet triangle
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int limit = 65;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout << "  ";
    //     }
    //     for(int k=65; k<=limit; k++){
    //         cout << (char)k << " ";
    //     }
    //     cout << endl;
    //     ++limit;
    // }

    /*
        !print the star pyramid
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int limit = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout << "  ";
    //     }
    //     for(int k=1; k<=limit; k++){
    //         cout << "* ";
    //     }
    //     cout<<endl;
    //     limit = limit + 2;
    // }

    /*
        !print number pyramid
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int limit = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<"  ";
    //     }
    //     for(int k=1; k<=limit; k++){
    //         cout << k << " ";
    //     }
    //     cout << endl;
    //     limit += 2;
    // }

    /*
        !print alphabet triangle
    */

    // int n;
    // cout << "Enter number of rows : ";
    // cin >> n;
    // int limit = 65;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout << "  ";
    //     }
    //     for(int k=65; k<=limit; k++){
    //         cout << (char)k << " ";
    //     }
    //     cout << endl;
    //     limit += 2;
    // }

    /*
        !print number pyramid tricky
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){//*spaces
    //         cout << "  ";
    //     }
    //     for(int k=1; k<=i; k++){//*number triangle
    //         cout << k << " ";
    //     }
    //     int limit = i-1;
    //     for(int l=1; l<=i-1; l++){//*reverse numbers
    //         cout << limit << " ";
    //         limit -= 1;
    //     }
    //     cout << endl;
    // }

    /*
        !print a star diamond
    */

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int limit = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout << "  ";
    //     }
    //     for(int k=1; k<=limit; k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    //     limit+=2;
    // }
    // limit -= 2;
    // for(int i=1; i<n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << "  ";
    //     }
    //     limit -= 2;
    //     for(int k=1; k<=limit; k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    /*
        !print star pyramid tricky
    */

    // int n;
    // cout<<"enter no.of rows: ";
    // cin >> n;
    // int middle_spaces = 1;
    // for(int i=1; i<=(2*n-1); i++){
    //     cout << "* ";
    // }
    // cout << endl;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout << "* ";
    //     }
    //     for(int k=1; k<=middle_spaces; k++){
    //         cout << "  ";
    //     }
    //     for(int l=1; l<=(n-i); l++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    //     middle_spaces += 2;
        
    // }

    /*
        !print number pyramid tricky
    */    

    // int n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // int middle_spaces = 1;
    // for(int i=1; i<=(2*n-1); i++){
    //     cout << i << " ";
    // }
    // cout << endl;
    // for(int i=1; i<=(n); i++){
    //     int count = (1);
    //     for(int j=1; j<=(n-i); j++){
    //         cout << count << " ";
    //         count +=1;
    //     }
    //     for(int k=1; k<=middle_spaces; k++){
    //         cout << "  ";
    //         count += 1;
    //     }
    //     for(int l=1; l<=(n-i); l++){
    //         cout << count << " ";
    //         count += 1;
    //     }
        
    //     cout << endl;
    //     middle_spaces += 2;
    // }

    /*
        !print diamond of alphabets
    */
    
    // int n;
    // cout<<"enter no.of lines: "<<endl;
    // cin >> n;
    // for(int line =1; line<= n; line++){
    //     int no_of_spaces = (n-line);
    //     for(int k =0 ; k<no_of_spaces; k++){
    //         cout << "  ";
    //     }
    //     int no_of_char = (2*line)-1;
    //     for(int j =0; j<no_of_char; j++){
    //         char ch = (char)('A' + j);
    //         cout << ch << " ";
    //     }
    //     cout<<"\n";
    // }
    // for(int line = (n+1); line<2*n; line++){
    //     int no_of_spaces_1 = (line-n);
    //     for(int k=0; k<no_of_spaces_1; k++){
    //         cout << "  ";
    //     }
    //     int no_of_char_1 = 2*(2*n - line)-1;
    //     for(int j=0; j<no_of_char_1; j++){
    //         cout << (char)('A'+j) << " ";
    //     }
    //     cout << endl;
    // }
    
    
    return 0;
}