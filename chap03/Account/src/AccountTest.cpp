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

    // Create more Account objects that use both `name` and `balance`
    Account account3{"John Appleseed", 50};
    Account account4{"Sony Ericsson", 100};
    std::cout << "account3 name is: " << account3.getName() <<"\t" << "Balance is: "<< account3.getBalance() << std::endl;
    std::cout << "account4 name is: " << account4.getName() <<"\t" << "Balance is: "<< account4.getBalance() << std::endl;


    
    return 0;
}
