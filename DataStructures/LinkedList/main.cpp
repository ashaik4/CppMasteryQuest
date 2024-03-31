#include <iostream>
#include "LinkedList.h"

int main(){
    LinkedList list; 
    for (int i = 0 ; i < 10; i++ ){
        list.insertAtHead(i);
        list.printList();
    }
    LinkedList list2;
    for (int i = 0 ; i < 10; i++ ){
        list2.insertAtTail(i);
        list2.printList();
    }
    return 0;
}