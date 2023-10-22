#include <iostream>
using namespace std;

int main() {
    cout << "Enter a six-digit number: ";
    string input;
    cin >> input;

    if (input.length() != 6) {
        cout << "Error: The entered number is not six digits long." << endl;
        return 1;
    }

    int sum_first_half = 0;
    int sum_second_half = 0;

    for (int i = 0; i < 3; i++) {
        sum_first_half += input[i] - '0';
        sum_second_half += input[i + 3] - '0';
    }

    if (sum_first_half == sum_second_half) {
        cout << "This is a lucky number!" << endl;
    }
    else {
        cout << "This is not a lucky number." << endl;
    }
    return 0;
}
