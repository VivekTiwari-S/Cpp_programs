#include<iostream>
using namespace std;

void push()
{

}

void pop()
{

}

void display()
{

}

int main()
{
    int stack[4],n = 4, top = -1;
    int ch,e;
    cout << "1. Push   2. Pop   3. Display   4. Exit " << endl;

    switch(ch)
    {
        cout << "Enter your choice : ";
        cin >> ch;
        case 1 :
            {
                cout << "Enter the element : ";
                cin >> e;
                push(e);
                break;
            }
        case 2 :
            {
                cout << "The deleted element is : " << stack[top]
            }
    }
    return 0;
}
