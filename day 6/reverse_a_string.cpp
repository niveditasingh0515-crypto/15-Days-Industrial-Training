#include <iostream>
using namespace std;

void reverseString(string str)
{
    if(str.length() == 0)
        return;

    reverseString(str.substr(1));
    cout << str[0];
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Reversed String: ";
    reverseString(str);

    return 0;
}