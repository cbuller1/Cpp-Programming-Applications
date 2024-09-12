#include <string>
#include "student.h"
#include "degree.h"
#include <iostream>

using namespace std; // used this so I didnt have to type "std" over & over

 // my accessors
    int accessAge();
    int accessDaystoComplete();
    string Student::accessStudentID() {return studentID;}
    string Student::accessFirstName() {return firstName;}
    string Student::accessLastName() {return lastName;}
    string Student::accessEmailAddress() {return emailAddress;}
    DegreeProgram Student::accessDegreeProgram() {return studentdegreeProgram;}
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
        cout << "StudentID " <<studentID << "/n";
        cout << "Last Name: " << lastName << "/n";
        cout << "First Name: " << firstName << "/n";
        cout << "Days in Course: " << totalDaysInCourse << "/n";
        cout << "Email Adddress: " << emailAddress << "/n";
        cout << "Days to Complete: " << daystoComplete << "/n";
        cout << "Age: " << age << "/n";

    }