#include <iostream>
using namespace std;

class GradBook{
public:
    GradBook(string name);
    void setCourseName(string name);
    string getCourseName();
    void displayMessage();
private:
    string courseName;
};