#include <string>
#include "student.h"
#include <iostream>

using namespace std; // used this so I didnt have to type "std" over & over

 // my accessors
    int accessAge();
    int accessDaystoComplete();
    string accessStudentID();
    string accessFirstName();
    string accessLastName();
    string accessEmailAddress();
    string accesssDegreeProgram();

    // mutators
    void age(int age);
    void daystoComplete(int);
    void studentID(std::string);
    void firstName(std::string);
    void lastName(std::string);
    void emailAddress(std::string);
    void totalDaysInCourse(int Course1, int Course2, int Course3);

    void Student::printInfo() {
        cout << "StudentID " <<studentID << "/n";
        cout << "Last Name: " << lastName << "/n";
        cout << "First Name: " << firstName << "/n";
        cout << "Days in Course: " << totalDaysInCourse << "/n";
        cout << "Email Adddress: " << emailAddress << "/n";
        cout << "Days to Complete: " << daystoComplete << "/n";
        cout << "Age: " << age << "/n";

    }