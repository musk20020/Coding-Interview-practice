#include <iostream>
using namespace std;

class GradBook{
public:
    GradBook(string name){
        setCourseName(name);
    }
    void setCourseName(string name){
        courseName = name;
    }
    string getCourseName(){
        return courseName;
    }
    void displayMessage(string courseName){
        cout << "welcome to the grade book for " << courseName << "!\n" 
        << endl;
}
private:
    string courseName;
};