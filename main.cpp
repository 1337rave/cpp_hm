#include <iostream>
using namespace std;

int main() {
    cout << "Enter a four-digit number: ";
    int number;
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Error: The entered number is not a four-digit number." << endl;
        return 1;
    }
    int first_digit = (number / 1000) % 10;
    int second_digit = (number / 100) % 10;
    int third_digit = (number / 10) % 10;
    int fourth_digit = number % 10;
    int new_number = second_digit * 1000 + first_digit * 100 + fourth_digit * 10 + third_digit;

    cout << "Number after swapping digits: " << new_number << endl;

    return 0;
}
