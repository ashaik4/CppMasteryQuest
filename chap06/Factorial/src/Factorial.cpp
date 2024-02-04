#include <iostream>
#include <iomanip>
#include "Factorial.h"

unsigned long factorial(unsigned long n){
    if (n <= 1){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main(){
    for (unsigned int counter{0}; counter<=10; counter++){
        std::cout<< std::setw(2) << counter << "! = " << factorial(counter) << std::endl;

    }
}