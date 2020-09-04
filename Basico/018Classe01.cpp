#include <iostream>
#include <string>
#include "018Classe01b.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    string nameOfCourse;

    cout << "Please enter your course name: ";
    getline(cin, nameOfCourse);
    cout << endl;
    GradeBook myGradeBook(nameOfCourse);
    myGradeBook.displayMessage();
    return 0;
}