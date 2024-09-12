#include <string>
#include "degree.h"

 using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student {

public:
// my accessors
    int accessAge();
    int accessDaystoComplete();
    string accessStudentID();
    string accessFirstName();
    string accessLastName();
    string accessEmailAddress();
    DegreeProgram accessDegreeProgram();
    int accesstotalDaysInCourse();

    // mutators
    void age();
    void daystoComplete();
    void studentID();
    void firstName(std::string);
    void lastName(std::string);
    void emailAddress(std::string);
    int totalDaysInCourse(int Course1, int Course2, int Course3);
    void setstudentDegreeProgram(DegreeProgram studentDegreeProgram);
    Student(); //Empty Constructor
    
    void printInfo();

private:

 // variables
    int age;
    int daysToComplete[2];
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    std::string studentID;
    DegreeProgram studentdegreeProgram;

};
#endif