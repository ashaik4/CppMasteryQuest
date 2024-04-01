#include <iostream>
#include "LinkedList.h"

int main(){
    LinkedList list; 
    for (int i = 0 ; i < 10; i++ ){
        list.insertAtHead(i);
        list.printList();
    }
    std::cout<<"Length of list before deleting value:"<<std::endl;
    std::cout<<list.length()<<std::endl;
    list.deleteByValue(0);
    std::cout<<"List after deletion:"<< std::endl;
    list.printList();
    std::cout<<"Length of list after deleting value:"<<std::endl;
    std::cout<<list.length()<<std::endl;
    LinkedList list2;
    for (int i = 0 ; i < 10; i++ ){
        list2.insertAtTail(i);
        list2.printList();
    }
    int element = 100;
    bool result = list2.search(100);
    std::cout<< "Search result for element: " << element <<  "is " << result ;
    return 0;
}