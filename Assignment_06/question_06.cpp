
#include <iostream>
using namespace std;

class Student {
    float CGPA;

public:
    void getData() {
        cout << "Enter CGPA: ";
        cin >> CGPA;
    }

    bool operator==(Student obj) {
        return CGPA == obj.CGPA;
    }

    bool operator>(Student obj) {
        return CGPA > obj.CGPA;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter CGPA of first student:" << endl;
    s1.getData();

    cout << "\nEnter CGPA of second student:" << endl;
    s2.getData();

    if (s1 == s2) {
        cout << "\nBoth students have the same CGPA." << endl;
    }
    else {
        cout << "\nBoth students have different CGPAs." << endl;
    }

    if (s1 > s2) {
        cout << "First student has higher CGPA." << endl;
    }
    else if (s2 > s1) {
        cout << "Second student has higher CGPA." << endl;
    }
    else {
        cout << "Both students have equal CGPA." << endl;
    }

    return 0;
}
