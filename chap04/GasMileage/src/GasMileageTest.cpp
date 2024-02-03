#include <iostream>
#include <string>
#include "GasMileage.h"

int main(){
    int milesDriven{0};
    int gallonsUsed{0};
    int totalMiles{0};
    int totalGallons{0};
    while (milesDriven != -1){
        
        std::cout<< "Enter miles driven (-1 to quit): "<< std::endl;
        std::cin >> milesDriven;
        if (milesDriven==-1){
            return 0;
        }
        std::cout << "Enter gallons used: ";
        std::cin >> gallonsUsed;
        GasMileage gm = GasMileage(milesDriven, gallonsUsed);
        gm.displayMPG();
        totalMiles += milesDriven;
        totalGallons += gallonsUsed;
        std::cout<< "Total MPG: "<< calculateTotalMPG(totalMiles, totalGallons)<< std::endl;
    }
    return 0;
}