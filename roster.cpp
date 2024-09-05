#include <iostream>
#include "roster.h"

using namespace std;

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i] = new Student();
        }
    }
}

void Roster::remove(string studentID) {
    if (classrosterArray[i])
}

