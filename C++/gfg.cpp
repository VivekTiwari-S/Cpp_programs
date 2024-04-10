// to find if number is perfect square or not

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    int i = sqrt(n);
    if ((i * i) == n)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    // cout << i;
    return 0;
}