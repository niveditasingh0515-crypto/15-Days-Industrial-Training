#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if(str1.length() != str2.length())
    {
        cout << "Not Anagram";
        return 0;
    }

    int count[26] = {0};

    for(int i = 0; i < str1.length(); i++)
    {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    bool anagram = true;

    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}