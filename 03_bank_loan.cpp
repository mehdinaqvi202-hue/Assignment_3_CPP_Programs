#include <iostream>
using namespace std;

int main() {
    int age, years;
    double salary, installments, credit;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter monthly salary: ";
    cin >> salary;
    cout << "Enter employment duration in years: ";
    cin >> years;
    cout << "Enter monthly loan installments: ";
    cin >> installments;
    cout << "Enter credit score: ";
    cin >> credit;

    if (credit < 600 || age < 21 || salary < 50000 ||
        years < 2 || installments > salary * 0.40) {
        cout << "Loan Rejected." << endl;
    } else if (salary > 150000 && years > 5) {
        cout << "Loan Approved: Premium Category." << endl;
    } else {
        cout << "Loan Approved: Regular Category." << endl;
    }
    return 0;
}