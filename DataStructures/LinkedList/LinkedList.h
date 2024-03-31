#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* nextElement;
    
    Node(){
        nextElement = nullptr;

    }

};

class LinkedList{
    private: 
        Node* head;
    
    public: 
        LinkedList();
        Node* getHead();
        bool isEmpty();
        bool printList();
        void insertAtHead(int value);
        void insertAtTail(int value);
};