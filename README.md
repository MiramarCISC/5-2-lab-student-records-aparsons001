[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=24241969)
# CISC 192 Lab 5.2: Student Records with Strings and Structures

## Overview

In this lab, you will build a small student records program using strings, structures, arrays of structures, and search functions.

The program stores student records that include an ID, name, and score. You will complete functions that print records, calculate class statistics, search by student ID, and validate record data.

## Learning Goals

By completing this lab, you will practice:

- Using `std::string`
- Comparing strings
- Accessing string characters
- Defining and using `struct` types
- Accessing structure members with the dot operator
- Creating arrays of structures
- Passing structures and arrays of structures to functions
- Searching records by a string field
- Running automated tests with `make test`

## Required Features

Your program must:

- Use a `Student` structure
- Store multiple students in an array of structures
- Print one student record
- Print all student records
- Calculate the class average score
- Find the highest score
- Search for a student by ID
- Validate student IDs
- Validate score values
- Pass the automated tests

## Files You Will Edit

You should primarily edit:

- `src/student_records.cpp`
- `src/main.cpp`

Do not edit the files in `tests/` unless your instructor tells you to.

## Build and Run

```bash
make
./main
```

## Run Tests

```bash
make test
```

## Clean Build Files

```bash
make clean
```

## Required Structure

```cpp
struct Student {
    std::string id;
    std::string name;
    double score;
};
```

## Required Functions

```cpp
bool isValidStudentId(std::string id);
bool isValidScore(double score);
void printStudent(const Student& student);
void printStudents(const Student students[], int size);
double calculateAverageScore(const Student students[], int size);
double findHighestScore(const Student students[], int size);
int findStudentById(const Student students[], int size, std::string targetId);
char determineLetterGrade(double score);
```

## Example Run

```text
Student Records

All students:
A123 Alex 91.5 A
B456 Maya 84 B
C789 Jordan 76.5 C

Class average: 84
Highest score: 91.5

Enter student ID to search for: B456
Found: B456 Maya 84 B
```

## Grading Notes

The tests call your functions directly. Your program may appear to run, but you will not receive full credit unless the required functions return correct values.

This lab focuses on strings and structures. Make sure your search function compares student IDs using `std::string` equality.
