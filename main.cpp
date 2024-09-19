#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"
#include "degree.h"

int main() {
    std::cout << "Course Title: C++ Programming\n";
    std::cout << "Programming Language: C++\n";
    std::cout << "WGU Student ID: [Your Student ID]\n";
    std::cout << "Name: [Your Name]\n";

    Roster classRoster;

    // Adding students
    classRoster.add("A1", "John", "Smith", "john.smith@domain.com", 20, 35, 40, 55,SECURITY);
    classRoster.add("A2", "Jane", "Doe", "jane.doe@domain.com", 22, 40, 50, 60, NETWORK);
    classRoster.add("A3", "Jim", "Beam", "jim.beam@domain.com", 19, 30, 35, 40, SECURITY);
    classRoster.add("A4", "Jake", "Blues", "jake.blues@domain", 23, 50, 40, 30, SOFTWARE); // Invalid email
    classRoster.add("A5", "Jill", "Valentine", "jill.valentine@domain.com", 21, 45, 50, 55, NETWORK);
    classRoster.add("A5", "Jill", "Valentine", "jill.valentine@domain.com", 21, 45, 50, 55, SECURITY);

    // Print all students
    classRoster.printAll();
    std::cout << "\n";

    // Print invalid emails
    classRoster.printInvalidEmails();
    std::cout << "\n";

    // Print average days in course for each student
    for (int i = 0; i < 5; ++i) {
        if (classRoster.classRosterArray[i] != nullptr) {
            classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->accessStudentID());
        }
    }
    std::cout << "\n";

    // Print by degree program
    classRoster.printByDegreeProgram(SOFTWARE);
    std::cout << "\n";

    // Remove a student and print all again
    classRoster.remove("A3");
    classRoster.printAll();
    std::cout << "\n";

    // Attempt to remove the same student again
    classRoster.remove("A3");

    return 0;
}