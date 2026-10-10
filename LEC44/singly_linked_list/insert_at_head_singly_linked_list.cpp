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

// print function

void printlist(Node* &head){

    Node* temp = head;

    // trasverse the list

    while (temp != NULL)
    {
        cout<<temp->data<<"<-->";
        temp = temp->next;
    }
    
}

void insertathead(Node* &head,int data){

    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

int main(){

    // create a new node

    Node* node1 = new Node(45);

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    Node* head = node1;

    printlist(head);

    cout<<endl;

    insertathead(head,9);

    insertathead(head,16);

    insertathead(head,89);

    insertathead(head,133);

    cout<<"AFTER INSERTING THE NODE="<<endl;

    printlist(head);


}