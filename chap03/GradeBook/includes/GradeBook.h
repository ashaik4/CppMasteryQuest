#pragma once
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>

class GradeBook{
    public: 
        GradeBook(std::string name);
        void setCourseName(std::string);
        std::string getCourseName();
        void displayMessage();

    private: 
        std::string courseName;
};
#endif
