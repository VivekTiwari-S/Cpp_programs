#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The factorial value is: " << fact(n) << endl;
    return 0;
}

// int main()
// {
//     int n;
//     int i = 1;
//     int ans = 1;
//     cout << "Enter the number :" << endl;
//     cin >> n;
//     while (i < n)
//     {
//         i += 1;
//         ans *= i;
//     }
//     // cout << "The factorial is :" << ans << endl;
//     cout << "The factorial of " << n << " is " << ans << endl;
//     return 0;
// }
