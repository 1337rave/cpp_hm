#include <iostream>
using namespace std;

int main() {
    double distance_AB, distance_BC, cargo_weight;
    double fuel_capacity = 300;
    double fuel_consumption_rate = 0;
    double required_fuel;

    cout << "Enter distance from A to B (in km): ";
    cin >> distance_AB;
    cout << "Enter distance from B to C (in km): ";
    cin >> distance_BC;
    cout << "Enter cargo weight (in kg): ";
    cin >> cargo_weight;

    if (cargo_weight <= 500) {
        fuel_consumption_rate = 1;
    }
    else if (cargo_weight <= 1000) {
        fuel_consumption_rate = 4;
    }
    else if (cargo_weight <= 1500) {
        fuel_consumption_rate = 7;
    }
    else if (cargo_weight <= 2000) {
        fuel_consumption_rate = 9;
    }
    else {
        cout << "The cargo weight is too heavy. The plane cannot take off." << endl;
        return 0;
    }
    double fuel_AB = distance_AB * fuel_consumption_rate;
    double fuel_BC = distance_BC * fuel_consumption_rate;

    required_fuel = fuel_AB + fuel_BC;

    if (required_fuel <= fuel_capacity) {
        cout << "The minimum fuel required in point B is: " << required_fuel << " liters." << endl;
    }
    else {
        cout << "The plane doesn't have enough fuel capacity to complete the trip." << endl;
    }

    return 0;
}
