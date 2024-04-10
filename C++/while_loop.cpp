#include <iostream>
using namespace std;
int main()
{

    // printing numbers from 1 to a
    /*
    int a;
    cout << "Enter the number till you want to print:";
    cin >> a;
    int i = 1;
    while (i <= a)
    {
        cout << i << " ";
        i += 1;
    }
    */

    // printing the sum from 1 to n

    int n;
    int num = 1;
    int sum = 0;
    cout << "Enter the number:";
    cin >> n;
    while (num <= n)
    {
        sum += num;
        // cout << sum << endl;
        // above line will print sum after every iteration
        num += 1;
    }
    cout << "Sum of numbers upto given number is :" << sum << endl;

    return 0;
}