#include <string>
#include "student.h"
#include "degree.h"
#include <iostream>

 // my accessors
    int accessAge();
    int accessDaystoComplete();
    std::string Student::accessStudentID() {return studentID;}
    std::string Student::accessFirstName() {return firstName;}
    std::string Student::accessLastName() {return lastName;}
    std::string Student::accessEmailAddress() {return emailAddress;}
    DegreeProgram Student::accessDegreeProgram() {return degreeProgram;}
    int accesstotalDaysInCourse(int Course1, int Course2, int Course3);

    // mutators
    void setage(int age);
    void setdaystoComplete(int);
    void setstudentID(std::string);
    void setfirstName(std::string);
    void setlastName(std::string);
    void setemailAddress(std::string);
    void settotalDaysInCourse(int Course1, int Course2, int Course3);

    void Student::printInfo() {
        std::cout << "StudentID " << studentID << "/n";
        std::cout << "Last Name: " << lastName << "/n";
        std::cout << "First Name: " << firstName << "/n";
        std::cout << "Days in Course: " << daysInCourse << "/n";
        std::cout << "Email Adddress: " << emailAddress << "/n";
        std::cout << "Days to Complete: " << daysToComplete << "/n";
        std::cout << "Age: " << age << "/n";

    }