#include "student_records.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Student students[DEFAULT_STUDENT_COUNT] = {
        {"A123", "Alex", 91.5},
        {"B456", "Maya", 84.0},
        {"C789", "Jordan", 76.5}
    };
printStudents(students, 3);
    std::string targetId; //updated targetId to std::string to match function signature

    cout << "Student Records" << endl;
    cout << endl;

    cout << "All students:" << endl;
    printStudents(students, DEFAULT_STUDENT_COUNT);
    cout << endl;

    cout << "Class average: "
         << calculateAverageScore(students, DEFAULT_STUDENT_COUNT)
         << endl;

    cout << "Highest score: "
         << findHighestScore(students, DEFAULT_STUDENT_COUNT)
         << endl;

    cout << endl;
    cout << "Enter student ID to search for: ";
    cin >> targetId;

    int index = findStudentById(students, DEFAULT_STUDENT_COUNT, targetId);

    if (index == -1) {
        cout << "Student not found." << endl;
    } else {
        cout << "Found: ";
        printStudent(students[index]);
    }

    return 0;
}
