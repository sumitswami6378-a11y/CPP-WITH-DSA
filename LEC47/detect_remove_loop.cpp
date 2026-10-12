#include<map>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Insert node at tail
void insertAtTail(Node*& head, Node*& tail, int data)
{
    Node* newNode = new Node(data);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Create a cycle
void createCycle(Node* head, Node* tail, int pos)
{
    if(pos == -1)
    {
        return;
    }

    Node* temp = head;

    for(int i = 0; i < pos; i++)
    {
        temp = temp->next;
    }

    tail->next = temp;
}

// Detect cycle using slow and fast pointer
bool detectCycle(Node* head)
{
    if(head == NULL)
    {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            return true;
        }
    }

    return false;
}

void removecycle(Node* &head){

    if (head == NULL)
    {
        return;
    }

    map<Node*,bool> visited;

    Node* temp = head;

    while (temp != NULL)
    {
        visited[temp] = true;

        if (temp->next != NULL && visited[temp->next] == true)
        {
            temp->next = NULL;
            return;
        }
        
        temp = temp->next;
    }
    
    

}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    // Create cycle:
    // 50 -> 30
    createCycle(head, tail, 2);

    if(detectCycle(head))
    {
       cout<<"cycle present"<<endl;
    }
    else
    {
        cout << "Cycle is not present" << endl;
    }

    
    removecycle(head);
    if(detectCycle(head))
    {
       cout<<"cycle present"<<endl;
    }
    else
    {
        cout << "Cycle is not present" << endl;
    }









    return 0;




}
