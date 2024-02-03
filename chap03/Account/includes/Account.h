#include <string>
#include <iostream>

class Account{
    public: 
        explicit Account(std::string accountName): name{accountName}{
            // empty body
        }
        Account(std::string accountName, int initialBalance): name{accountName}{
            if (initialBalance > 0){
                balance = initialBalance;
            }
        }
        void setName(std::string accountName){
            name = accountName;
        }
        std::string getName() const {
            return name;
        }
        int getBalance() const {
            return balance;
        }
        void withdraw(int withdrawAmount){
            if(withdrawAmount > balance){
                std::cout << "Withdrawal amount exceeded account balance." << std::endl;
            }
            if(withdrawAmount <= balance){
                balance = balance - withdrawAmount;
            }
        }
        void deposit(int depositAmount){
            if(depositAmount > 0){
                balance = balance + depositAmount;
            }
        }
        void displayMessage() const {
            std::cout << "Account name: " << name << std::endl;
            std::cout << "Account balance: " << balance << std::endl;
        }

        

    private:
        std::string name;
        int balance{0};

};