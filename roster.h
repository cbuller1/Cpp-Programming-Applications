#include "student.h"
#include "degree.h"

using namespace std;

#ifndef ROSTER_H
#define ROSTER_H

class Roster {
    public:

    Roster();
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void remove(string studentID);
    void printByDegreeProgram(DegreeProgram degreeProgram);

    void add(
        string studentID, 
        string firstName, 
        string lastName, 
        string emailAddress, 
        int age, 
        int daysInCourse1, 
        int daysInCourse2, 
        int daysInCourse3, 
        DegreeProgram degreeProgram
        );
        Student* classRosterArray[5];
};

#endif