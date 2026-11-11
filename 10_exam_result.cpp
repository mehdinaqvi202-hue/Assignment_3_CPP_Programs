#include <iostream>
using namespace std;

int main() {
    int marks[5], total = 0;
    bool failed = false;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks of subject " << i + 1 << " (out of 100): ";
        cin >> marks[i];
        total += marks[i];
        if (marks[i] < 40)
            failed = true;
    }

    double percentage = total / 5.0;
    cout << "Total marks = " << total << " / 500" << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    if (failed) {
        cout << "Result: Failed (one or more subjects below 40)." << endl;
    } else if (percentage < 50) {
        cout << "Result: Passed subjects, but not eligible for degree." << endl;
    } else {
        cout << "Result: Passed and eligible for degree." << endl;
        if (percentage >= 85)
            cout << "Award: Gold Medal." << endl;
        else if (percentage >= 75)
            cout << "Award: Silver Medal." << endl;
        else if (percentage >= 65)
            cout << "Award: Merit Scholarship." << endl;
        else
            cout << "Award: No medal or scholarship." << endl;
    }
    return 0;
}