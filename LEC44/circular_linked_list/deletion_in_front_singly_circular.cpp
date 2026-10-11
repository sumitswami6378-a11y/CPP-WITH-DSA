#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor

    Node(int data){

        this->data = data;
        this->next = NULL;
    }
};

void printlist(Node* &head){


    Node* temp = head;

    cout<<temp->data<<endl;
    temp = temp->next;

    while (temp != head)
    {
         cout<<temp->data<<endl;
         temp = temp->next;
    }
    
}

void circularsingly(Node* &head,Node* &rear,int data){

    Node* newnode = new Node(data);

    if (head == NULL)
    {
        head = newnode;
        rear = newnode;
        return;
    }

    rear->next = newnode;
    rear = newnode;
    rear->next = head;
    
}

void insertatelement(Node* &head,Node* &rear,int element,int data){

    Node* newnode = new Node(data);

    Node* temp = head;


    if (head == NULL)
    {
        head = newnode;
        rear = newnode;
        return;
        
    }

    if (rear->data = element)
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = head;
        return;
    }
    
    

    while (temp->data != element)
    {
        temp = temp->next;

        if (temp == head)
        {
            cout<<"ELEMENT NOT FOUND"<<endl;
            return;
        }
        
        
    }

    newnode->next = temp->next;
    temp->next = newnode;
    
}

void deletefront(Node* &head,Node* &rear){

    if (head == NULL)
    {
       return;
    }
    if (head == rear)
    {
        head = NULL;
        rear = NULL;

        return;
    }
    

    Node* temp = head;
    head = head->next;
    rear->next = head;

    delete temp;
    
}

int main(){

    Node* head = NULL;
    Node* rear = NULL;

    circularsingly(head,rear,5);
    circularsingly(head,rear,9);
    
    circularsingly(head,rear,11);
    circularsingly(head,rear,45);
    
    circularsingly(head,rear,1);
    circularsingly(head,rear,3);



    printlist(head);

    insertatelement(head,rear,11,7);

    cout<<"INSERT AFTER THE 11"<<endl;

    printlist(head);

    cout<<"INSERT AFTER rear"<<endl;

    insertatelement(head,rear,3,12);

    printlist(head);




}