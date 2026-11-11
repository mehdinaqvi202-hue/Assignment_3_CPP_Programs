#include <iostream>
using namespace std;

int main() {
    double purchase, discount = 0, amount, delivery;
    char premium, unpaid;

    cout << "Enter purchase amount: Rs. ";
    cin >> purchase;
    cout << "Premium member? (y/n): ";
    cin >> premium;
    cout << "Any unpaid previous order? (y/n): ";
    cin >> unpaid;

    if (purchase > 50000)
        discount = 0.20;
    else if (purchase > 25000)
        discount = 0.15;
    else if (purchase > 10000)
        discount = 0.10;

    amount = purchase - purchase * discount;

    if (premium == 'y' || premium == 'Y')
        amount = amount - amount * 0.05;

    if (amount > 20000)
        delivery = 0;
    else
        delivery = 500;

    amount += delivery;

    if (unpaid == 'y' || unpaid == 'Y')
        cout << "Order cannot be confirmed because previous order is unpaid." << endl;
    else
        cout << "Order Confirmed." << endl;

    cout << "Payable amount = Rs. " << amount << endl;
    return 0;
}