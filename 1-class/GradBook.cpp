#include <iostream>
#include "GradBook.h"
using namespace std;

GradBook::GradBook(string name){
    setCourseName(name);
}
void GradBook::setCourseName(string name){
    courseName = name;
}
string GradBook::getCourseName(){
    return courseName;
}
void GradBook::displayMessage(){
    cout << "welcome to the grade book for " << getCourseName() << "!\n" 
    << endl;
}