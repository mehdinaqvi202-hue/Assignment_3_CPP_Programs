#include <iostream>
using namespace std;

int main() {
    double distance, waiting, fare;
    int hour;
    char premium, cancelled;

    cout << "Enter distance in kilometres: ";
    cin >> distance;
    cout << "Enter waiting time in minutes: ";
    cin >> waiting;
    cout << "Enter ride start hour (0-23): ";
    cin >> hour;
    cout << "Premium member? (y/n): ";
    cin >> premium;
    cout << "Did driver cancel after accepting? (y/n): ";
    cin >> cancelled;

    if (cancelled == 'y' || cancelled == 'Y') {
        cout << "Driver penalty = Rs. 300" << endl;
        cout << "No ride fare is calculated." << endl;
        return 0;
    }

    fare = 150 + distance * 50 + waiting * 10;

    if (hour >= 22 || hour < 6)
        fare += fare * 0.20;
    if (premium == 'y' || premium == 'Y')
        fare -= fare * 0.10;

    cout << "Final ride fare = Rs. " << fare << endl;
    return 0;
}