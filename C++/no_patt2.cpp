#include<iostream>
using namespace std;
int main()
{
    int a,i,j;
    cout << "Enter the no of rows : ";
    cin >> a;
    for(i = 0;i < a;i++)
    {
        for(j = 0;j <= i;j++)
        {
            cout << i+j+1 << " ";
        }
        cout << endl;
    }
    return 0;
}
