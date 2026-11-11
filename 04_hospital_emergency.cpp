#include <iostream>
using namespace std;

int main() {
    int age, heartRate;
    float temperature, oxygen;

    cout << "Enter patient age: ";
    cin >> age;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temperature;
    cout << "Enter oxygen level (%): ";
    cin >> oxygen;
    cout << "Enter heart rate: ";
    cin >> heartRate;

    if (oxygen < 90 || heartRate > 130 || heartRate < 45)
        cout << "Category: Critical - Immediate Priority." << endl;
    else if (age > 65 && temperature > 102)
        cout << "Category: High Priority." << endl;
    else if (oxygen >= 90 && oxygen <= 94)
        cout << "Category: Moderate Priority." << endl;
    else
        cout << "Category: Normal Priority." << endl;

    return 0;
}