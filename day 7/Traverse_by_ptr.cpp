#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int *ptr = arr;

    cout << "Array elements are: ";

    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}