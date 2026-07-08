#include <iostream>
#include <string>
using namespace std;

int main() {

    string studentName;
    int totalSubjects;

    string subjectName;
    float marks;
    float gradePoint;
    float creditHours;

    float totalCredits = 0;
    float totalGradePoints = 0;
    float cgpa;

    cout << "===== CGPA Calculator =====" << endl;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Total Subjects: ";
    cin >> totalSubjects;

    for (int i = 1; i <= totalSubjects; i++) {

        cout << "\n===== Subject " << i << " =====" << endl;

        cout << "Enter Subject Name: ";
        cin >> subjectName;

        cout << "Enter Marks: ";
        cin >> marks;

        cout << "Enter Grade Point: ";
        cin >> gradePoint;

        cout << "Enter Credit Hours: ";
        cin >> creditHours;

        totalCredits += creditHours;

        totalGradePoints += (gradePoint * creditHours);
    }

    cgpa = totalGradePoints / totalCredits;

    cout << "\n===== Final Result =====" << endl;

    cout << "Student Name: " << studentName << endl;

    cout << "Total Credit Hours: " << totalCredits << endl;

    cout << "CGPA: " << cgpa << endl;

    return 0;
}
