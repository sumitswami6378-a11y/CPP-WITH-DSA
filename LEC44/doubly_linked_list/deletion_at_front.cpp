#include<iostream>
using namespace std;
class Node{

    public:
    
    int data;
    Node* prev;
    Node* next;

    Node(int data){

        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};


void printlist(Node* &head){

    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    
    }
    
}

void insertatrear(Node* &head,Node* &rear,int data){

   

    Node* newnode = new Node(data);

    if (head == NULL && rear == NULL )
    {
        head = newnode;
        rear = newnode;
        return;
    }

    rear->next = newnode;
    newnode->prev = rear;
    rear = newnode;


    
}

void deletionatfront(Node* &head){

    Node* temp = head;

    head = head->next;
    head->prev =NULL;
    delete temp;
}


int main(){

    Node* head = NULL;
    Node* rear = NULL;


    insertatrear(head,rear,56);
    insertatrear(head,rear,8);
    insertatrear(head,rear,10);
    insertatrear(head,rear,18);
    insertatrear(head,rear,75);
    insertatrear(head,rear,3);

    printlist(head);

    deletionatfront(head);

    cout<<"after deletion front"<<endl;

    printlist(head);


}
