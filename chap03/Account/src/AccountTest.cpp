#include<string>
#include "Account.h"
#include <iostream>

int main(){

    // Create two Account objects
    Account account1{"Jane Green"};
    Account account2{"John Blue"};
    std::cout << "account1 name is: " << account1.getName() << std::endl;  
    std::cout << "account2 name is: " << account2.getName() << std::endl;   
    // try default constructor
    // Account account3; ==> this line will throw an error because we have no default constructor. 
    // Default constructor is only provided if no constructor is defined.
    
    
    return 0;
}
