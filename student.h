#include <iostream>
#include <string>
#include "degree.h"

#ifndef STUDENT_H
#define STUDENT_H

class Student {

public:
// my accessors
    int accessAge();
    int accessDaystoComplete();
    std::string accessStudentID();
    std::string accessFirstName();
    std::string accessLastName();
    std::string accessEmailAddress();
    DegreeProgram accessDegreeProgram();
    int accesstotalDaysInCourse();

    // mutators
    void setage();
    void setdaystoComplete();
    void setstudentID();
    void setfirstName(std::string);
    void setlastName(std::string);
    void setemailAddress(std::string);
    int settotalDaysInCourse(int Course1, int Course2, int Course3);
    void setstudentDegreeProgram(DegreeProgram studentDegreeProgram);
    Student();
    
    void printInfo();

private:

 // variables
    int age;
    int daysToComplete[2];
    int daysInCourse;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    std::string studentID;
    DegreeProgram degreeProgram;

};
#endif