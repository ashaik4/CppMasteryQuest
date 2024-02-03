#include <string>
#include <iostream>
#include "GradeBook.h"

GradeBook::GradeBook(std::string name){
    setCourseName(name);
}

void GradeBook::setCourseName(std::string name){
    if (name.length() <= 25){
        courseName = name;
    }
    if (name.length() > 25){
        courseName = name.substr(0, 25);
        std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
                  << "Limiting courseName to first 25 characters.\n" << std::endl;
    }
}

std::string GradeBook::getCourseName(){
    return courseName;
}

void GradeBook::displayMessage(){
    std::cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << std::endl;
}
```