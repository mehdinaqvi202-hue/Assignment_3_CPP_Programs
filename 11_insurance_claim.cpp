#include <iostream>
using namespace std;

int main() {
    char insurance, policyValid, licence, alcohol, responsible;
    double damage, payable;

    cout << "Valid vehicle insurance? (y/n): ";
    cin >> insurance;
    cout << "Policy not expired? (y/n): ";
    cin >> policyValid;
    cout << "Valid driving licence? (y/n): ";
    cin >> licence;
    cout << "Driver under influence of alcohol? (y/n): ";
    cin >> alcohol;
    cout << "Estimated damage amount: Rs. ";
    cin >> damage;
    cout << "Was driver responsible for accident? (y/n): ";
    cin >> responsible;

    if (insurance == 'n' || policyValid == 'n' || licence == 'n' ||
        alcohol == 'y' || insurance == 'N' || policyValid == 'N' ||
        licence == 'N' || alcohol == 'Y') {
        cout << "Claim Rejected." << endl;
        return 0;
    }

    if (damage < 20000)
        cout << "Claim approved without inspection." << endl;
    else if (damage <= 200000)
        cout << "Physical inspection is required." << endl;
    else
        cout << "Manager approval is required." << endl;

    payable = damage;
    if (responsible == 'y' || responsible == 'Y')
        payable -= payable * 0.20;

    cout << "Payable amount after applicable deduction = Rs. " << payable << endl;
    return 0;
}