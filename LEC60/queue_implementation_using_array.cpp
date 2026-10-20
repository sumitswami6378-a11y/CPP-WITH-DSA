#include<iostream>
using namespace std;

class Queue{

    public:
    
    int *queue;
    int size;
    int front;
    int rear;

    // constructor

    Queue(int size){

        this->size = size;
        queue = new int[size];
        front = -1;
        rear = -1;
    }

  void push(int value){

    if(rear == size - 1){

        cout << "QUEUE IS FULL" << endl;
    }
    else{

        if(front == -1 && rear == -1){

            front = 0;
            rear = 0;
            queue[rear] = value;
        }
        else{

            rear++;
            queue[rear] = value;
        }
    }
}

    void empty(){

        if (front == -1 && rear == -1)
        {
            cout<<"EMPTY"<<endl;
          
        }
        
    }

    void pop(){

        if (front == -1)
        {
            cout<<"QUEUE IS EMPTY"<<endl;
        }
        else{

            if (front == 0 && rear == 0)
            {
                front = -1;
                rear = -1;
            }
            else{

                  front++;

            }
            
          
            
        }
        
    }

    int top(){

        if (front == -1)
        {
            return -1;
        }
        

        return queue[front];
        
    }

};

int main(){

    Queue qu(10);


    
    qu.push(656);
    qu.push(12);
    qu.push(121);

   cout << qu.top() << endl;

    qu.pop();

    qu.empty();


}