#include <iostream>
using namespace std;

int main() {
    int speed;
    char previous, licence, registered;
    double fine = 0;

    cout << "Enter vehicle speed (km/h): ";
    cin >> speed;
    cout << "Previous violations? (y/n): ";
    cin >> previous;
    cout << "Valid driving licence? (y/n): ";
    cin >> licence;
    cout << "Vehicle registered? (y/n): ";
    cin >> registered;

    if (speed <= 60)
        fine = 0;
    else if (speed <= 80)
        fine = 2000;
    else if (speed <= 100)
        fine = 5000;
    else
        fine = 10000;

    if (previous == 'y' || previous == 'Y')
        fine = fine + fine * 0.25;
    if (licence == 'n' || licence == 'N')
        fine += 5000;
    if (registered == 'n' || registered == 'N')
        fine += 10000;

    cout << "Total fine = Rs. " << fine << endl;
    if (licence == 'n' || licence == 'N' ||
        registered == 'n' || registered == 'N')
        cout << "Journey cannot continue." << endl;
    else
        cout << "Vehicle can continue its journey." << endl;

    return 0;
}