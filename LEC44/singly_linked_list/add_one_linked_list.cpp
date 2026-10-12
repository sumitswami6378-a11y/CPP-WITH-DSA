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
        return;
    }

    rear->next = newnode;
    
    rear = newnode;
    rear->next = NULL;
    
}

Node* reverse(Node* &head){

    if (head == NULL)
    {
        return NULL;
    }

    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    return prev;
    
}

void addone(Node* &head){

    if (head == NULL)
    {
        return;
    }
    
    reverse(head);

    int sum = (head->data + 1) % 10;
    int carry = (head->data + 1) / 10;

    head->data = sum;

    Node* temp = head->next;
    
    while (temp != NULL)
    {
        sum = (temp->data + carry) % 10;
        carry = (temp->data + carry) / 10;

        temp->data = sum;

        temp = temp->next;
    }

    if (carry != 0)
    {
        Node* newnode = new Node(carry);

        newnode->next = head;
        head = newnode;
    }

    reverse(head);
    
}

int main(){

    Node* head = NULL;
    Node* rear = NULL;

    insert(head,rear,9);
    insert(head,rear,9);
    insert(head,rear,9);
    
    cout<<"Before adding 1:"<<endl;
    printlist(head);

    addone(head);

    cout<<"After adding 1:"<<endl;
    printlist(head);

}