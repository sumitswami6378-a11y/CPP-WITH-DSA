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

void deletionatrear(Node* &head,Node* &rear){

    if (head == NULL)
    {
        return;
    }

    Node* temp = rear;

    if (head == rear)
    {
        head = NULL;
        rear = NULL;
    }

    rear = rear->prev;
    rear->next = NULL;
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
    cout<<"REAR DATA IS="<<rear->data<<endl;

    deletionatrear(head,rear);

    

    cout<<"AFTER DELETE THE REAR"<<endl;

         cout<<"REAR DATA IS="<<rear->data<<endl;

     printlist(head);


}
