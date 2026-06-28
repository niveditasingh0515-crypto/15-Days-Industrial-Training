#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int words = 1;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            words++;
        }
    }

    cout << "Total words = " << words;

    return 0;
}