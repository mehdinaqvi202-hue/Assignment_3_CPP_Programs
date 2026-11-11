#include <iostream>
using namespace std;

int main() {
    int units;
    char late;
    double bill = 0;

    cout << "Enter consumed units: ";
    cin >> units;
    cout << "Payment after due date? (y/n): ";
    cin >> late;

    if (units < 0) {
        cout << "Invalid units.";
        return 0;
    }

    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = 100 * 10 + (units - 100) * 15;
    else if (units <= 500)
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    else
        bill = 100 * 10 + 100 * 15 + 300 * 20 + (units - 500) * 25;

    if (bill > 10000)
        bill = bill + bill * 0.05;

    if (late == 'y' || late == 'Y')
        bill = bill + bill * 0.10;

    cout << "Final electricity bill = Rs. " << bill << endl;
    return 0;
}