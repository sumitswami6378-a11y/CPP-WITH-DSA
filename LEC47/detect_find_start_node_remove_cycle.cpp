#include<iostream>
using namespace std;
    
class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
};



Node* cycle(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            return slow;
        }
    }

    return NULL;
}


Node* removeLoop(Node* head)
{
    if(head == NULL)
    {
        return head;
    }

    Node* slow = cycle(head);

    // No cycle
    if(slow == NULL)
    {
        return head;
    }

    // Find starting point of cycle
    Node* start = head;

    while(start != slow)
    {
        start = start->next;
        slow = slow->next;
    }

    // Find last node of cycle
    Node* temp = start;

    while(temp->next != start)
    {
        temp = temp->next;
    }

    // Remove cycle
    temp->next = NULL;

    return head;
}