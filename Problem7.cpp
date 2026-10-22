#include <iostream>
using namespace std;

int main() {
    int marks, sum = 0, count = 0;

    for (;;) {
        cout << "Enter marks (-1 to stop): ";
        cin >> marks;

        if (marks == -1)
            break;

        sum += marks;
        count++;
    }

    if (count > 0)
        cout << "Average = " << (float)sum / count << endl;
    else
        cout << "No marks entered." << endl;

    return 0;
}
