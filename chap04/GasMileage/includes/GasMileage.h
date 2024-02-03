#pragma once 
#ifndef GASMILEAGE_H
#define GASMILEAGE_H

#include <iostream>
#include <string>

class GasMileage{
    public: 
        GasMileage(int miles, int gallons):milesDriven{miles}, gallonsUsed{gallons}{
            
        }
        void setMiles(int miles){
            if (miles >= 0){
                milesDriven = miles;
            }
        }
        int getMiles(){
            return milesDriven;
        }

        void setGallonsUsed(int gallons){
            if (gallons >= 0){
                gallonsUsed = gallons;
            }
        }

        int getGallonsUsed(){
            return gallonsUsed;
        }

        double calculateMPGForTrip(){
            return static_cast<double>(milesDriven)/static_cast<double>(gallonsUsed);
        }

        void displayMPG(){
            std::cout<< "MPG this trip: " << calculateMPGForTrip() << std::endl;
        }
        
    private: 
        int milesDriven{0};
        int gallonsUsed{0};
};

double calculateTotalMPG(int mileage, int gallons){
    return static_cast<double>(mileage)/ static_cast<double>(gallons);

}

#endif