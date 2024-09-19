#include <iostream>
#include "student.h"
#include "degree.h"

#ifndef ROSTER_H
#define ROSTER_H

class Roster {
    public:

    Roster();
    void printAll();
    void printAverageDaysInCourse(std::string studentID);
    void printInvalidEmails();
    void remove(std::string studentID);
    void printByDegreeProgram(DegreeProgram degreeProgram);

    void add(std::string studentID,std::string firstName,std::string lastName,std::string emailAddress,int age,int daysInCourse1,int daysInCourse2,int daysInCourse3,DegreeProgram degreeProgram);
        Student* classRosterArray[5];
};

#endif