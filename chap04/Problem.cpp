/* 4.7 Write single C++ statements or portions of statements that do the following:

Input unsigned int variable x with cin and >>.
Input unsigned int variable y with cin and >>.
Declare unsigned int variable i and initialize it to 1.
Declare unsigned int variable power and initialize it to 1.
Multiply variable power by x and assign the result to power.
Preincrement variable i by 1.
Determine whether i is less than or equal to y.
Output integer variable power with cout and <<.”
*/

#include<iostream>

using namespace std;

int main(){

    unsigned int x;
    unsigned int y;
    unsigned int i{1};
    unsigned int power{1};
    cout<< "Enter the value for x: "<< endl;
    cin>> x;
    cout<< "Enter the value for y: "<< endl;
    cin>> y;
    while (i <= y){
        power *= x;
        ++i;
    };

    cout << "power: " << power << endl;
    return 0;
}
