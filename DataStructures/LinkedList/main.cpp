#include <iostream>
#include "LinkedList.h"

int main(){
    LinkedList list; 
    for (int i = 0 ; i < 10; i++ ){
        list.insertAtHead(i);
        list.printList();
    }
    return 0;
}