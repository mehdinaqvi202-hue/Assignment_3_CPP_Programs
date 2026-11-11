#include <iostream>
using namespace std;

int main() {
    double salary, attendance, rating, bonusRate = 0, finalSalary;
    int years;

    cout << "Enter basic salary: Rs. ";
    cin >> salary;
    cout << "Enter attendance percentage: ";
    cin >> attendance;
    cout << "Enter performance rating (out of 5): ";
    cin >> rating;
    cout << "Enter years of service: ";
    cin >> years;

    if (rating >= 3) {
        if (attendance < 75)
            bonusRate = 0;
        else if (attendance <= 89)
            bonusRate = 0.05;
        else if (attendance <= 95)
            bonusRate = 0.10;
        else
            bonusRate = 0.15;
    }

    finalSalary = salary + salary * bonusRate;
    if (years > 5)
        finalSalary += 5000;

    cout << "Bonus = Rs. " << salary * bonusRate << endl;
    cout << "Final salary = Rs. " << finalSalary << endl;
    return 0;
}