#include<iostream>
using namespace std;
class Stack{


    class Node{

        public:

        int data;
        Node* next;

        Node(int data){

            this->data = data;
            this->next = NULL;
        }

    };

 

   // constructor in stack

   public:

     Node* top;

   Stack(){

    top = NULL;
   }

   void push(int value){

    Node* newnode = new Node(value);

    if (newnode == NULL)
    {
        cout<<"FULL"<<endl;
    }
    else{

        if (top == NULL)
        {
            top = newnode;
        }
        else{
            
           newnode->next = top;
           top = newnode;
        }
        
    }
    }

    void pop(){

        if (top == NULL)
        {
            cout<<"empty"<<endl;
        }
        else{

            Node* temp = top;
            top = top->next;
            delete temp;
        }
        
    }

    bool empty(){

        if (top == NULL)
        {
            return true;
        }
        else{

            return false;
        }
        
    }

    int peek(){

        if (top == NULL)
        {
            return -1;
        }
        else{

            return top->data;
        }
        
    }

    void display(){

        if (top == NULL)
        {
            return;
        }
        else{

            Node* temp = top;

          while (temp != NULL)
          {
                 cout<<temp->data<<endl;
                 temp = temp->next;
          }
          
        }
        
    }

};


int main(){


    Stack st;
    st.push(66);

    st.push(5);

    st.empty();
    st.pop();
    st.peek();
    st.pop();
}