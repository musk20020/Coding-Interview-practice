#include <iostream>
#include "GradBook.h"
using namespace std;

int main(){
    GradBook gradbook1("CS101 Introductionto c++ programing");
    GradBook gradbook2("CS102 DATA structure in c++");
    cout << "gradebook1 create for course : " << gradbook1.getCourseName() << endl;
    cout << "gradebook2 create for course : " << gradbook2.getCourseName() << endl;
}