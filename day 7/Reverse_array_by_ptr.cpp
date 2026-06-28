#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int *ptr = arr;

    cout << "Reverse array: ";

    for(int i = 4; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}