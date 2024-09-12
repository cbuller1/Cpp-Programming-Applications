#include <iostream>
#include "roster.h"
#include "student.cpp"

using namespace std;

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != 0) {
            classRosterArray[i] = new Student(); // may need to add arguments to this?
        }
    }
}

void Roster::remove(string studentID) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->accessStudentID() == studentID && classRosterArray[i] != 0) {
            delete classRosterArray[i];
            classRosterArray[i] = 0;
        }
    }
}

void Roster::printAll() {
    for(int i; i < 5; i++) {
        if (classRosterArray[i] != 0) {
            classRosterArray[i]->printInfo();
        }
    }
}


void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != 0 && classRosterArray[i]->accessStudentID() == studentID) {
            int days = classRosterArray[i]-> accesstotalDaysInCourse();
            double average = days/ 3.0;  // need to upodate this to work correctly !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            std::cout << "Average days in course for student ID " << studentID << " is " << average << std::endl;
            return;
        }
    }
    std::cout << "Error: Student with ID " << studentID << " not found." << std::endl;
}


// make this not look fucked !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void Roster::printInvalidEmails(){
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != 0) {
            std::string email = classRosterArray[i]->accessEmailAddress();
            if (email.find('@') == std::string::npos || email.find('.') == std::string::npos || email.find(' ') != std::string::npos) {
                std::cout << "Invalid email: " << email << std::endl;
            }
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram){
    std::string degreeProgramNames[] = { "Security", "Networking", "Software" };
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != 0 && classRosterArray[i]->accessDegreeProgram() == degreeProgram) {
            cout << (classRosterArray[i]->accessDegreeProgram());
        }
    }