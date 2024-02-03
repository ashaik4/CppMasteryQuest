#include<iostream>
#include<string>
using namespace std;

class Invoice{
    private: 
        string partNumber;
        string partDescription;
        int quantity{0};
        int pricePerItem{0};
    public: 
        Invoice(string partNumber, string partDescription, int quantity, int pricePerItem)
        : partNumber{partNumber}, partDescription{partDescription}, quantity{quantity}, pricePerItem{pricePerItem} {
            if(quantity < 0){
                quantity = 0;
            }
            if(pricePerItem < 0){
                pricePerItem = 0;
            }
        }

        string getPartNumber() const{
            return partNumber;
        }

        string getPartDescription() const{
            return partDescription;
        }

        int getQuantity() const{
            return quantity;
        }

        int getPricePerItem() const{
            return pricePerItem;
        }

        void setPartNumber(string newPartNumber){
            partNumber = newPartNumber;
        }

        void setPartDescription(string newPartDescription){
            partDescription = newPartDescription;
        }

        void setQuantity(int newQuantity){
            if(newQuantity < 0){
                newQuantity = 0;
            }
            quantity = newQuantity;
        }

        void setPricePerItem(int newPricePerItem){
            if(newPricePerItem < 0){
                newPricePerItem = 0;
            }
            pricePerItem = newPricePerItem;
        }
        
        int getInvoiceAmount() const{
            return quantity * pricePerItem;
        }
};
