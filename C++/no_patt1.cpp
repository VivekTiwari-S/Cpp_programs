#include<iostream>
using namespace std;
int main()
{
    int a,num,i,j;
    num = 1;
    cout << "Enter the number of rows : ";
    cin >> a;
    for(i = 0; i < a; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
