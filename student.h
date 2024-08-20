#include <string>
#include "degree.h"

class Student {

public:
// variables
int age;
int daysToComplete[2];
std::string firstName;
std::string lastName;
std::string emailAddress;
std::string studentID;
DegreeProgram studentDegreeProgram;

// my accessors
int accessAge();
int accessDaystoComplete();
std::string accessStudentID();
std::string accessFirstName();
std::string accessLastName();
std::string accessEmailAddress();
std::string accesssDegreeProgram();

// mutators




};