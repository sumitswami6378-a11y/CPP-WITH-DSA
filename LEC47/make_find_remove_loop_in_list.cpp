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


void printlist(Node* &head){

    if (head == NULL)
    {
        return;
    }
    
   

    Node* temp = head;
    cout<<temp->data<<"--";
    temp = temp->next;

    while (temp != head)
    {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    
}

void list(Node* &head, int data){

    Node* newnode = new Node(data);

    if(head == NULL)
    {
        head = newnode;
        newnode->next = head;
        return;
    }

    Node* temp = head;

    while(temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->next = head;
}

Node* detect(Node* &head){


    if (head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return slow;
        }
        
    }


    return NULL;
    
    
    

}


Node* firstnode(Node* &head,Node* &slow){

    if (head == NULL || slow == NULL)
    {
        return NULL;
    }

    Node* start = head;

    while (start != slow)
    {
       slow = slow->next;
       start = start->next;
       
    }


    return start;   
    
}

Node* removeloop(Node* &head,Node* &start){

    if (head == NULL || start == NULL)
    {
        return head;
    }

    Node* temp = head;

    while (temp->next != start)
    {
        temp = temp->next;
    }

    temp->next = NULL;

    return head;
    
    
}

void checkcycle(Node* head){

    if (head == NULL)
    {

        cout<<"CYCLE IS NOT PRESENT"<<endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            cout<<"cycle is present "<<endl;
            return;
        }
        
    }

    cout<<"cycle is not present"<<endl;
    
    
}

int main(){

    Node* head = NULL;

    list(head,6);
    list(head,1);
    list(head,3);
    list(head,7);
    list(head,9);
    printlist(head);

    checkcycle(head);

    Node* slow = detect(head);
    
    Node* start = firstnode(head,slow);
    
    removeloop(head,start);

    cout<<"AFTER REMOVED THE LOOP"<<endl;

    checkcycle(head);

    printlist(head);


}