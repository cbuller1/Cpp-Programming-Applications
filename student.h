#include <string>
#include "degree.h"

#ifndef STUDENT_H
#define STUDENT_H

class Student {

public:

    Student(); //Empty Constructor
    DegreeProgram studentDegreeProgram; //  to enum
    void printInfo();

private:

 // variables
    int age;
    int daysToComplete[2];
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    std::string studentID;

};
#endif