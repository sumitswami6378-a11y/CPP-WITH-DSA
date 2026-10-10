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


void insert(Node* &head,Node* &rear,int data){


    // create linked list

    Node* newnode = new Node(data);

    if (head == NULL && rear == NULL)
    {
        head = newnode;
        rear = newnode;
    }
    else{

        rear->next = newnode;
        rear = newnode;
    }
    

}


void printlist(Node* &head){

    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp= temp->next;
    }
    
}

void position(Node* &head,Node* &rear,int position,int data){

    // create new position

    Node* newnode = new Node(data);

    Node* temp = head;

    if (position == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    

    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        newnode->next = NULL;
        rear->next = newnode;
        rear = newnode;
    }
    

    newnode->next = temp->next;
    temp->next = newnode;
    

}


int main(){


   Node* head = NULL;
   Node* rear = NULL;

   insert(head,rear,56);
   insert(head,rear,6);
   insert(head,rear,61);

   insert(head,rear,16);

   insert(head,rear,5);

   insert(head,rear,2);

   insert(head,rear,3);

   insert(head,rear,9);

   insert(head,rear,11);

   printlist(head);

   position(head,rear,10,8);

   cout<<"AFTER THE POSITION"<<endl;

   printlist(head);




    


}