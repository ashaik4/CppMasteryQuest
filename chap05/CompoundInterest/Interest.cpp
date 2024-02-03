/** “A person invests $1,000 in a savings account yielding 5% interest. 
 * Assuming that all the interest is left on deposit, calculate and print the amount of money 
 * in the account at the end of each year for 10 years. Use the following formula to determine the amounts:

    a=p*(1+r) ** n

where
    p is the original amount invested (i.e., the principal)
    r is the annual interest rate (e.g., use 0.05 for 5%)
    n is the number of years
    a is the amount on deposit at the end of the nth year.”
**/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    double principal{4000000};
    double rate{0.2};

    cout << "Initial principal: " << principal << endl;
    cout << "    Interest rate: " << rate << endl;

    // display headers
    cout << "\nYear" << setw(20) << "Amount on Deposit" << setw(20) << "Total Amount"<< endl;
    // calculate amount on deposit for each of 10 years

    for (unsigned int year{1}; year <= 10; year++)
    {
        // calculate amount on deposit at the end of the specified year
        double amount = principal * pow(1.0 + rate, year);

        // display the year and the amount
        cout << setw(4) << year << setw(20) << amount - principal << setw(20) << amount << endl;
    }
    return 0;
}