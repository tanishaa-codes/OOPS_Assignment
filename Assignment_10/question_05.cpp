
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> students;
    int n, roll, searchRoll;
    string name;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter roll number: ";
        cin >> roll;

        cout << "Enter student name: ";
        cin >> name;

        students[roll] = name;
    }

    cout << "\nStudent Records:" << endl;

    for (auto x : students) {
        cout << "Roll Number: " << x.first
             << ", Name: " << x.second << endl;
    }

    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    auto it = students.find(searchRoll);

    if (it != students.end()) {
        cout << "Student Found!" << endl;
        cout << "Name: " << it->second << endl;
    }
    else {
        cout << "Student not found!" << endl;
    }

    return 0;
}
