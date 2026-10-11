#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        
        this->data = data;
        this->next =  NULL;
        this->prev = NULL;
    }
};

void printlist(Node* &head){

    if (head == NULL)
    {
        return;
    }
    

    Node* temp = head;

    cout<<temp->data<<endl;
    temp = temp->next;

    while (temp != head)
    {
         cout<<temp->data<<endl;
         temp = temp->next;
        
    }
    
}

void circulardoubly(Node* &head, Node* &rear,int data){

    Node* newnode = new Node(data);

    if (head == NULL)
    {
        head = newnode;
        rear = newnode;
        rear->next = head;
        head->prev= rear;

        return;
    }

    rear->next = newnode;
    newnode->prev = rear;
    rear = rear->next;
    rear->next = head;
    head->prev = rear;
    
}

// insert after the given element

void insertatelement(Node* &head,Node* &rear,int element,int data){

    if(head == NULL){

        return;
    }

    Node* newnode = new Node(data);

    Node* temp = head;

    while (temp->data != element)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;


    if (rear->data == element)
    {
        newnode->next = rear->next;
        rear->next->prev = newnode;
        rear->next = newnode;
        newnode->prev = rear;
        rear = rear->next;

        return;
    }

}

void dltfront(Node* &head,Node* &rear){

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
    head->prev = rear;
    rear->next = head;
    delete temp;
    
    
}

void dltrear(Node* &head,Node* &rear){

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

    Node* temp = rear;

    while (temp->next != rear)
    {
        temp = temp->next;
    }

    temp->next = rear->next;
    rear = temp;
    rear->next = head;
    head->prev = rear;
    


}

int main(){


    Node* head = NULL;
    Node* rear = NULL;

    circulardoubly(head,rear,6);
    circulardoubly(head,rear,11);
    circulardoubly(head,rear,16);
    circulardoubly(head,rear,1);
    circulardoubly(head,rear,23);
    circulardoubly(head,rear,15);
    circulardoubly(head,rear,61);
    circulardoubly(head,rear,11);

    printlist(head);

    insertatelement(head,rear,15,21);

    cout<<"DATA INSERTING AFTER THE 15"<<endl;

        printlist(head);

    cout<<"DELETE FRONT"<<endl;

    dltfront(head,rear);

    printlist(head);
    


}