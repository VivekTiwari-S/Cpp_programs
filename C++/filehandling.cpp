#include<iostream>
#include<cctype>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    string text;
    char ch;
    ifstream myFile("mydata.txt");
    while (getline (myFile, text))
    {
        for (int x=0;  x < text.length();  x++)
            putchar(toupper(text[x]));
    }
    return 0;
}
