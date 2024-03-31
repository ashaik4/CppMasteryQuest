#include "LinkedList.h"

LinkedList::LinkedList(){
    head = nullptr;
}

Node* LinkedList::getHead(){
    return head;
}

bool LinkedList::isEmpty(){
    if (head == nullptr){
        return true;
    }
    else {
        return false;
    }
}

bool LinkedList::printList(){
    if(isEmpty()){
        std::cout<< "List is empty";
        return false;
    }
    Node *temp = head;
    std::cout<< "List : ";
    while(temp!=nullptr){
        cout<< temp->data << "->";
        temp = temp->nextElement;
    }
    std::cout << "null "<< std::endl;
    return true;
}

void LinkedList::insertAtHead(int value){
    Node *newNode = new Node();
    newNode->data = value;
    newNode->nextElement = head;
    head = newNode;
    std::cout << value << " Inserted! ";

}
