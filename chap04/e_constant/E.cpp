#include<iostream>

using namespace std;

int factorial(int n){
    int result{1};
    if(n == 0){
        return 1;
    }
    while (n >= 1 ){
        result = result * n;
        --n;
    }
    return result;
}
int main(){
    cout<<"Enter the accuracy for computing e: "<<endl;
    cout << "Factorial of 5 is :" << factorial(5) << endl;
    int accuracy{1};
    double e{1.0};
    cin>>accuracy;
    while(accuracy >= 1){
        int f = factorial(accuracy);
        e += 1.0/static_cast<double>(f);
        --accuracy;
    }
    cout<<"The value of e is: "<<e<<endl;
    return 0;
}