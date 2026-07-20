#ifndef STUDENT_RECORDS_HPP
#define STUDENT_RECORDS_HPP

#include <string>

const int DEFAULT_STUDENT_COUNT = 3;

const double A_MINIMUM = 90.0;
const double B_MINIMUM = 80.0;
const double C_MINIMUM = 70.0;
const double D_MINIMUM = 60.0;

struct Student {
    std::string id;
    std::string name;
    double score;
};

// Required validation functions
bool isValidStudentId(std::string id);
bool isValidScore(double score);

// Required output functions
void printStudent(const Student& student);
void printStudents(const Student students[], int size);

// Required calculation and search functions
double calculateAverageScore(const Student students[], int size);
double findHighestScore(const Student students[], int size);
int findStudentById(const Student students[], int size, const std::string& targetId); //updated targetId
char determineLetterGrade(double score);

#endif
