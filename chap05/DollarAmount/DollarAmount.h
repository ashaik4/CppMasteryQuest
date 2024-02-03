#ifndef DOLLARAMOUNT_H
#define DOLLARAMOUNT_H

#include <string>
#include <cmath>

class DollarAmount{
    public: 
        // Initialize amount from an int64_t value
        explicit DollarAmount(int64_t value) : amount{value} { }

        // Add right's amount to this object's amount to yield a new DollarAmount object
        void add(DollarAmount right) {
            // can access private data of other objects of the same class
            amount += right.amount;
        }

        // Subtract right's amount from this object's amount to yield a new DollarAmount object
        void subtract(DollarAmount right) {
            // can access private data of other objects of the same class
            amount -= right.amount;
        }

        // Uses integer arithmetic to calculate interest amount,
        // then calls add with the interest amount
        void addInterest(int rate, int divisor){
            // create DollarAmount representing the interest
            DollarAmount interest{
                (amount * rate + divisor / 2) / divisor
            };
            add(interest); // add interest to this object's amount 
        }

        // Return a string representation of a DollarAmount object
        std::string toString() const {
            std::string dollars{std::to_string(amount / 100)};
            std::string cents{std::to_string(std::abs(amount % 100))};
            return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
        }   

    private:
        int64_t amount{0}; // dollar amount in pennies
};
#endif