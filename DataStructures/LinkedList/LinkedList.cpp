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

void LinkedList::insertAtTail(int value){
    if (isEmpty()){
        insertAtHead(value);
    }else{
        Node *tail = head; 
        while (tail->nextElement != nullptr){
            tail = tail->nextElement;
        }
        Node *newNode = new Node();
        newNode->data = value;
        tail->nextElement = newNode;
        newNode->nextElement = nullptr;
        tail = newNode;
    }
}

bool LinkedList::search(int value){
    head = getHead();
    Node * current = head;
    while (current!=nullptr){
        if (current->data == value){
            return true;
        }
        current = current->nextElement;
    }
    return false;
}

bool LinkedList::deleteAtHead(){
    if (isEmpty()){
        std::cout<< "List is empty"<< std::endl;
    }

    Node *currentNode = head;
    head = head->nextElement;
    delete currentNode;
    return true;
}

bool LinkedList::deleteByValue(int value){
    Node* current = getHead();
    Node* prev = current;
    if (current->data==value){
        return deleteAtHead();
    }
    current = current->nextElement;
    while (current!=nullptr){
        if (current->data==value){
            prev->nextElement = current->nextElement;
            delete current;
            return true;

        }
        current = current->nextElement;
        prev = prev->nextElement;

    }
    return false;
}

int LinkedList::length(){
    int length = 0;
    if (isEmpty()){
        return length;
    }
    Node* current = getHead();
    while(current!=nullptr){
        length += 1;
        current = current->nextElement;
    }
    return length;
}

/*
to reverse two nodes within a linked list: 
step 1: save current's next pointer in `next`
step 2: reverse current's pointer to point to prev
step 3: prev should progress to current 
step 4: current should progress to `next`(saved in step: 1)
*/
Node* LinkedList::reverse(){
    Node *current = getHead();
    Node *previous = nullptr;
    Node *next = nullptr;

    while(current!=nullptr){
        // save next ptr 
        next = current->nextElement;
        // reverse the pointer
        current->nextElement = previous;
        // move forward
        previous = current;
        current = next;
    }
    head = previous;
    return head;

}