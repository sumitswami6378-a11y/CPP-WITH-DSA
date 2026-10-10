// IMPLEMENTATION OF THE LINKED LIST

#include<iostream>
using namespace std;

class Node{           // creation of the node

    public:

    int data;
    Node* next;

    // allow data on the constructor

    Node(int data){

        this->data = data;
        this->next = NULL;
    }

};

int main(){

    Node* node1 = new Node(44);    // creating object dynamically...
    Node* node2 = new Node(4); 
    Node* node3 = new Node(14); 
    Node* node4 = new Node(2); 
    Node* node5 = new Node(47); 
                    

  //  node1->data = 25;        // allow values by the using of constructor
    
    cout<<node1->data<<endl;      // data of the node1
    cout<<node1->next<<endl;      // pointer of the node1

    cout<<node2->data<<endl;      // data of the node1
    cout<<node2->next<<endl;

    cout<<node3->data<<endl;      // data of the node1
    cout<<node3->next<<endl;

    cout<<node4->data<<endl;      // data of the node1
    cout<<node4->next<<endl;

    cout<<node5->data<<endl;      // data of the node1
    cout<<node5->next<<endl;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    Node* temp = node1;

    while (temp != NULL)
    {
        cout<<temp->data<<"<-->";
        temp= temp->next;
    }
    
}