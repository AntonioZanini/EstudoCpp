#include <iostream>
using std::cout;
using std::endl;
#include "018Classe01b.h"

GradeBook::GradeBook(string name)
{
    setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
    courseName = name;
}
string GradeBook::getCourseName()
{
    return courseName;
}
void GradeBook::displayMessage()
{
    cout << "Welcome to the Grade Book for "<< endl << getCourseName() << "!" << endl;
}