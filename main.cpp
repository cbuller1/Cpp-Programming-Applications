#include <iostream>
#include "roster.h"

int main() {
    std::cout << "Course Title: C++ Programming" << std::endl;
    std::cout << "Programming Language: C++" << std::endl;
    std::cout << "WGU Student ID: [Your Student ID]" << std::endl;
    std::cout << "Name: [Your Name]" << std::endl << std::endl;

    Roster classRoster;

    // Adding students
    classRoster.add("A1", "John", "Smith", "john.smith@domain.com", 20, 35, 40, 55, SOFTWARE);
    classRoster.add("A2", "Jane", "Doe", "jane.doe@domain.com", 22, 40, 50, 60, NETWORKING);
    classRoster.add("A3", "Jim", "Beam", "jim.beam@domain.com", 19, 30, 35, 40, SECURITY);
    classRoster.add("A4", "Jake", "Blues", "jake.blues@domain", 23, 50, 40, 30, SOFTWARE); // Invalid email
    classRoster.add("A5", "Jill", "Valentine", "jill.valentine@domain.com", 21, 45, 50, 55, NETWORKING);

    // Print all students
    classRoster.printAll();
    std::cout << std::endl;

    // Print invalid emails
    classRoster.printInvalidEmails();
    std::cout << std::endl;

    // Print average days in course for each student
    for (int i = 0; i < 5; ++i) {
        if (classRoster.classRosterArray[i] != nullptr) {
            classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->accessStudentID());
        }
    }
    std::cout << std::endl;

    // Print by degree program
    classRoster.printByDegreeProgram(SOFTWARE);
    std::cout << std::endl;

    // Remove a student and print all again
    classRoster.remove("A3");
    classRoster.printAll();
    std::cout << std::endl;

    // Attempt to remove the same student again
    classRoster.remove("A3");

    return 0;
}