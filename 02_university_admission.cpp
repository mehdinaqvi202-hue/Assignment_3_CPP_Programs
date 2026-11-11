#include <iostream>
using namespace std;

int main() {
    float matric, inter, test;

    cout << "Enter Matric percentage: ";
    cin >> matric;
    cout << "Enter Intermediate percentage: ";
    cin >> inter;
    cout << "Enter Entry Test percentage: ";
    cin >> test;

    if (matric < 60 || inter < 65 || test < 50) {
        cout << "Admission Rejected." << endl;
    } else {
        cout << "Admission Approved." << endl;
        if (inter >= 85 && test >= 80)
            cout << "Category: Merit Scholarship" << endl;
        else
            cout << "Category: Regular Admission" << endl;
    }
    return 0;
}