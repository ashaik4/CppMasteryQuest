#include<iostream>
#include<string>
#include "Invoice.h"
using namespace std;

void displayInvoice(const Invoice &invoice){
    cout << "Part number: " << invoice.getPartNumber() << endl;
    cout << "Part description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per item: " << invoice.getPricePerItem() << endl;
    cout << "Invoice amount: " << invoice.getInvoiceAmount() << endl;
}

int main(){
    Invoice invoice1{"87654321", "Hammer", 10, 5};
    Invoice invoice2{"23456789", "Screwdriver", 5, 10};
    Invoice invoice3{"98765432", "Shovel", 3, 30};
    Invoice invoice4{"54321098", "Wrench", 2, 50};
    Invoice invoice5{"12345678", "Grinder", 1, 100};

    displayInvoice(invoice1);
    cout << endl;
    displayInvoice(invoice2);
    cout << endl;
    displayInvoice(invoice3);
    cout << endl;
    displayInvoice(invoice4);
    cout << endl;
    displayInvoice(invoice5);
    cout << endl;
    return 0;
}