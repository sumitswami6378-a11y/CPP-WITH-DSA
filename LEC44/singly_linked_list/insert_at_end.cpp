#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    Node(int data){

        this->data = data;
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


void insertatend(Node* &head, Node* &rear,int data){

    Node* newnode = new Node(data);

   // newnode->data = data;

    if (head == NULL && rear == NULL)
    {
     //   head->next = newnode;
        head = newnode;
        rear = newnode;
    }
    else{

        rear->next = newnode;
        rear = newnode;
    }
    
}

int main(){


   

    Node* head = NULL;
    Node* rear = NULL;


    cout<<"BEFORE INSERTING"<<endl;
    printlist(head);

    insertatend(head,rear,5);
    insertatend(head,rear,9);
    insertatend(head,rear,11);
    insertatend(head,rear,23);
    insertatend(head,rear,53);
    insertatend(head,rear,16);
    

    cout<<"AFTER INSERTING THE NODE"<<endl;

    printlist(head);








}