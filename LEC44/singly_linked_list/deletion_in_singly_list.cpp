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

void insert(Node* &head,Node* &rear,int data){

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

// deletion the node

void deletionatstart(Node* &head,Node* &rear){

    // deletion at beginning

    Node* temp = head;

    if (head == NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    

    if (head == rear)
    {
        delete head;
        head = NULL;
        rear = NULL;
    }
    else{

        temp = head;
        head = head->next;
        delete temp;
    }
    


}

void deletionatend(Node* &head,Node* &rear){


  if (head == NULL)
  {

    cout<<"LIST IS EMPTY"<<endl;
    return;
  }

  if(head == rear)
{
    delete head;
    head = NULL;
    rear = NULL;
    return;
}

  Node* temp = head;

  while (temp->next != rear)
  {
    temp = temp->next;
  }
  
  delete rear;

  rear = temp;
  rear->next = NULL;
  
    
}

void deleteposition(Node* &head,Node* &rear,int position){

    if (head == NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }

    if (position == 1)
    {
        deletionatstart(head,rear);
        return;
    }

    int count =0;
    Node* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    temp = head;
    

    if (position == count)
    {
        deletionatend(head,rear);
        return;
    }
    
 Node* temp2 = head;

    // node to be deleted
    Node* current = head->next;

    for(int i = 2; i < position; i++)
    {
        temp2 = temp2->next;
        current = current->next;
    }

    temp2->next = current->next;

    delete current;
    

    
}



int main(){

    Node* head = NULL;
    Node* rear = NULL;

    insert(head,rear,55);
    insert(head,rear,3);
    insert(head,rear,2);
    insert(head,rear,5);
    insert(head,rear,8);
    insert(head,rear,9);

    printlist(head);
   


    deletionatstart(head,rear);
        cout<<"starting delete"<<endl;

    printlist(head);

    deletionatend(head,rear);

        cout<<"ending delete"<<endl;

    printlist(head);

    deleteposition(head,rear,3);

        cout<<"position delete"<<endl;
    
    printlist(head);





}