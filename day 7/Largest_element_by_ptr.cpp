#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int *ptr = arr;
    int largest = *ptr;

    for(int i = 1; i < 5; i++) {
        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    cout << "Largest element = " << largest << endl;

    return 0;
}