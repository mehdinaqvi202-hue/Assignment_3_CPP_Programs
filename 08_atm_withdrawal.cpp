#include <iostream>
using namespace std;

int main() {
    double balance, amount, dailyWithdrawn;
    char blocked;

    cout << "Enter account balance: Rs. ";
    cin >> balance;
    cout << "Enter withdrawal amount: Rs. ";
    cin >> amount;
    cout << "Enter amount already withdrawn today: Rs. ";
    cin >> dailyWithdrawn;
    cout << "Is account blocked? (y/n): ";
    cin >> blocked;

    if (blocked == 'y' || blocked == 'Y')
        cout << "Transaction rejected: Account is blocked." << endl;
    else if (amount < 500 || ((int)amount % 500 != 0))
        cout << "Transaction rejected: Amount must be at least Rs. 500 and a multiple of Rs. 500." << endl;
    else if (amount > balance)
        cout << "Transaction rejected: Insufficient balance." << endl;
    else if (dailyWithdrawn + amount > 100000)
        cout << "Transaction rejected: Daily limit exceeded." << endl;
    else {
        if (amount > 50000)
            cout << "Additional verification required." << endl;
        cout << "Transaction allowed." << endl;
        cout << "Remaining balance = Rs. " << balance - amount << endl;
    }
    return 0;
}