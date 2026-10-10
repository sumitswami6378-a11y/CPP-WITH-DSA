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


void insertathead(Node* &head,int data){

    Node* temp = new Node(data);    // creation of the node address

    if (head == NULL)
    {
        head = temp;
        return;
    }
    

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void printlist(Node* &head){

    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
}



int main(){

    

    Node* head = NULL;

   
    insertathead(head,96);
    insertathead(head,9);
    insertathead(head,6);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,4);
    insertathead(head,23);

    printlist(head);


    
}