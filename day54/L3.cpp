#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    /*
    int i = 1; // loop variable
    while (i < n)
    {
        sum += i;
        i++;
    }
    */



    /*
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    */




    /*
    do{
        int num;
        cin>>num;
        sum += num;
        n--;
    }while (n>0);
    */


    for (int i=1; i<=50; i++){
        if (i%3==0){
            continue;
        }
        cout << i << endl;
    }

    cout << sum << endl;

    return 0;
}