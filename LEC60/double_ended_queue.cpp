#include<iostream>
using namespace std;

class deque{

    public:

    // properties

    int* dequeue;
    int size;
    int front;
    int rear;

    // constructor

    deque(int size){

        this->size = size;
        
        dequeue = new int[size];
        
        front = -1;
        rear = -1;

    }

    //

    void push_back(int value){

        if ((rear + 1) % size == front)
        {
            cout<<"full"<<endl;
        }
        else{

        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            dequeue[front] = value;
        }
        else{

            if (front == rear)
            {
               rear = (rear + 1)% size;
            }
            else{

                rear = (rear + 1)%size;

               
            }
             dequeue[rear] = value;
            
        }


        }
      }

    void push_front(int value){

        if ((rear + 1)%size == front) 
        {
            cout<<"FULL"<<endl;
        }
        else{

            if (front == -1 && rear == -1)
            {
                front = rear =0;
               

            }
            else{

                front = (front -1 + size)%size;

            }

            dequeue[front] = value;


        }

    }

    int pop_front(){

        if (front == -1 && rear == -1)
        {
           cout<<"EMPTY"<<endl;
           return -1;
        }
        else{

            int value = dequeue[front];

            if (front == rear)
            {
              
                front = rear = -1;
            }
            else{

                front = (front + 1)%size;
            }

            return value;
            
        }
        
    }

    int pop_back(){

        if (front == -1 && rear == -1)
        {
            cout<<"empty"<<endl;
            return -1;
        }
        else{

            int value = dequeue[rear];

            if (front == rear)
            {
                front = rear = -1;
            }
            else{

                rear = (rear - 1 + size)%size;
            }

            return value;
            
        }
        
    }

    bool empty(){

        if (front == -1 && rear == -1)
        {
            return true;
        }
        else{

            return false;
        }
        
    }
    bool full(){


        if ((rear + 1)% size == front)
        {
            return true;
        }
        else{

            return false;
        }
        
    }



};