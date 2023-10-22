#include <iostream>
using namespace std;

int main() {
    int max = INT_MIN;

    for (int i = 0; i < 7; i++) {
        int number;
        cout << "Enter an integer: ";
        cin >> number;

        if (number > max) {
            max = number;
        }
    }
    
    cout << "The maximum of the 7 numbers is: " << max << endl;

    return 0;
}