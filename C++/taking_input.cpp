#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "A is greater than B" << endl;
    }
    else if (a == b)
    {
        cout << "A and B are equal" << endl;
    }
    else
    {
        cout << "A is less than B" << endl;
    }
}