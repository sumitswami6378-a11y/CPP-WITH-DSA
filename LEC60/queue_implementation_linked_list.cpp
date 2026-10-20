#include<iostream>
using namespace std;

class Queue{


    class Node{


        public:

        int data;
        Node* next;

        // node constructor


        Node(int data){

            this->data = data;
            this->next = NULL;
        }
    };

    public:

    Node* front;
    Node* rear;

    // CONSTRUCTOR OF THE QUEUE

    Queue(){

        front = NULL;
        rear = NULL;
    }


    // FUNCTIONS

    void push(int value){

        Node* newnode = new Node(value);

        if (newnode == NULL)
        {
            cout<<"QUEUE IS OVERFLOW"<<endl;
        }
        else{

            if (front == NULL && rear == NULL)
            {
                front = newnode;
                rear = newnode;
            }
            else{

                rear->next = newnode;
                rear = newnode;
            }
            
        }
        
    }

    void pop(){

        if (front == NULL && rear == NULL)
        {
            cout<<"QUEUE IS EMPTY"<<endl;
        }
        else{

            if (front == rear)
            {

                Node* temp = front;
                front = NULL;
                rear = NULL;

                delete temp;
            }
            else{

                Node* temp = front;
                front = front->next;
                delete temp;
            }
            
        }
        
    }

    int first(){

        if (front == NULL && rear == NULL)
        {
            cout<<"EMPTY"<<endl;
            return -1;
        }
        else{

            return front->data;
        }
        
    }

    int last(){

        if (front == NULL && rear == NULL)
        {
            return -1;
        }
        else{

            return rear->data;
        }
        
    }

    bool empty(){

        if (front == NULL && rear == NULL)
        {
            return true;
        }
        else{

            return false;
        }
        
    }

};

int main(){

    Queue q;

    q.push(5);

    q.pop();

    q.empty();

    return 0;
}