#include <iostream>
#include "GradeBook.h"

int main(){
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    std::cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << std::endl;
    std::cout << "gradeBook2 created for course: " << gradeBook2.getCourseName() << std::endl;

    return 0;
}
