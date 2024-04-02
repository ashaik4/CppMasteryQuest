#include <iostream>
#include "LinkedList.h"
//the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */


int main(){
    LinkedList list; 
    for (int i = 0 ; i < 10; i++ ){
        list.insertAtHead(i);
        list.printList();
    }
    std::cout<<RED<<"Testing delete() function\n"<< RESET;
    std::cout<<"Length of list before deleting value:"<<std::endl;
    std::cout<<list.length()<<std::endl;
    list.deleteByValue(0);
    std::cout<<"List after deletion:"<< std::endl;
    list.printList();
    std::cout<<"Length of list after deleting value:"<<std::endl;
    std::cout<<list.length()<<std::endl;

    std::cout<<RED<<"Testing reverse() function\n"<< RESET;
    list.printList();
    list.reverse();
    list.printList();
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