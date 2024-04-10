#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    string x;
    cout << "Hello world !" << endl;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << endl;
    cout << "The addition of " << a << " and " << b << " is " << (a + b) << endl;
    cout << endl;
    cout << b << " when subtracted from " << a << " results in " << (a - b) << endl;
    cout << endl;
    cout << "The multiplication of " << a << " and " << b << " is " << (a * b) << endl;
    cout << endl;
    cout << a << " divided by " << b << " is " << (a / b) << endl;
    cout << endl;
    cout << endl;
    cout << "Enter a character : " << endl;
    cin >> ch;
    cout << "The character entered is : " << ch << endl;
    cout << endl;
    cout << "Enter a string : " << endl;
    cin >> x;
    cout << endl;
    cout << "The entered string is : " << x << endl;
    return 0;
}
