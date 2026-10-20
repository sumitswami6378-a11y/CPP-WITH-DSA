#include<iostream>
using namespace std;
class Circularqueue{

    public:

    // properties

    int* queue;
    int size;
    int front;
    int rear;

    // functions

    Circularqueue(int size){

        this->size = size;

        queue = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int x){

        if ((rear + 1)% size == front)
        {
            cout<<"FULL"<<endl;
        }
        else{

            if (front == -1 && rear == -1)
            {
                front = rear = 0;
                
            }
            else{
                rear = (rear + 1)%size;
            }
            queue[rear] = x;
            
        }
        


    }

    int pop(){

        if (front == -1 && rear == -1)
        {
            return -1;
        }
        else{

            int value = queue[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else{

                front = (front + 1)% size;
            }

            return value;
        }
        
    }

    bool empty(){

        if (front == -1)
        {
            return true;
        }
        else{

            return false;
        }
        
    }

    int top(){

       

        if (front == -1 && rear == -1)
        {
            return -1;
        }
        else{

             int f = queue[front];
             return f;
        }
    }

};

int main(){

    Circularqueue ct(10);

    ct.push(55);
    ct.push(64);

}