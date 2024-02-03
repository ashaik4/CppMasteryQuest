#include <string>

class Account{
    public: 
        explicit Account(std::string accountName): name{accountName}{
            // empty body
        }
        void setName(std::string accountName){
            name = accountName;
        }
        std::string getName() const {
            return name;
        }

    private:
        std::string name;

};