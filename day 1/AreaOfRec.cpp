#include <iostream>
using namespace std;

int main() {
    float length, width;

    cout << "Enter length and width: ";
    cin >> length >> width;

    float area = length * width;

    cout << "Area of Rectangle = " << area;

    return 0;
}