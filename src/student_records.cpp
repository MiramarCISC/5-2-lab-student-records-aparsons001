#include "student_records.hpp"
#include <iostream>
#include <string> //added so compiler can reconize string


using namespace std;

bool isValidStudentId(std::string id) {
    if (id.length() < 3) { // checks if the id lenght is at least 3 
        return false;
    }
    if (id[0] < 'A' || id[0] > 'Z') { // checks if id at index position 0 is between capital A and Z
        return false;
    }
    for (size_t i = 1; i < id.length(); i++) {// Verify remaining characters are digits
        if (!isdigit(id[i])) {
            return false;
        }
    }
    return true;
}
bool isValidScore(double score) {
    //  Returns true when score is between 0 and 100, inclusive.
    if(score >= 0 && score <= 100){
        return true; }
        else{
    return false;}
}

void printStudent(const Student& student) {
    cout << student.id << " "
         << student.name << " "
         << student.score << " "
         << determineLetterGrade(student.score)
         << endl;
}

void printStudents(const Student students[], int size) {
    if (students == nullptr || size <= 0) {
        cout << "No students to print." << endl;
        return;
    }

    for (int i = 0; i < size; i++) {
        printStudent(students[i]);
    }
}

double calculateAverageScore(const Student students[], int size) {
    if(students == nullptr || size <= 0){
    return 0.0;
}
    double total = 0.0; // defines and finds avg score
    for(int i =0; i < size; i++) {
        total += students[i].score;
    }
   return total / size; //returns avg score
}

double findHighestScore(const Student students[], int size) {
    if(students == nullptr || size <= 0){
    return 0.0;
    }
    double highScore = students[0].score; //finds highest score
    for (int i = 1; i < size; i++){
        if (students[i].score > highScore){
            highScore = students[i].score;
        }
    }
        return highScore; // returns highest score found
}

int findStudentById(const Student students[], int size, const std::string& targetId) {
    if (students == nullptr || size <= 0) {
        return -1;
    }
    for (int i = 0; i < size; i++){
        if (students[i].id == targetId){ //compares student array to targetId
            return i; // returns index of targetId
        } 
    }
            return -1; // if student not found, -1 returned  
}

char determineLetterGrade(double score) { 
//checks if score is within ranges defined in A-D_Minimum 
//defined in student_records.hpp
   if (score >= A_MINIMUM) {
        return 'A';
    } else if (score >= B_MINIMUM) {
        return 'B';
    } else if (score >= C_MINIMUM) {
        return 'C';
    } else if (score >= D_MINIMUM) {
        return 'D';
    } else {
        return 'F';
    }
}

