
#include <iostream>
using namespace std;

class Student {
    int marks[5];

public:
    void getMarks() {
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for subject "
                 << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculateAverage() {
        int sum = 0;

        try {
            for (int i = 0; i < 5; i++) {
                if (marks[i] < 0 || marks[i] > 100) {
                    throw marks[i];
                }

                sum += marks[i];
            }

            float average = sum / 5.0;

            cout << "\nAverage Marks = "
                 << average << endl;
        }
        catch (int x) {
            cout << "\nError: Invalid marks entered!"
                 << endl;
            cout << "Marks must be between 0 and 100."
                 << endl;
        }
    }
};

int main() {
    Student s;

    cout << "Enter marks in five subjects:" << endl;

    s.getMarks();
    s.calculateAverage();

    return 0;
}
