#include<iostream>
using namespace std;
   
// stack implementation using the array

class Stack{


    public:
    //properties

    int *st;
    int size;
    int top;

    // behaviour

    Stack(int size){

        this->size = size;
        st = new int[size];
        top = -1;
    }


    void push(int element){

        if (top == size - 1)
        {
            cout<<"STACK IS EMPTY"<<endl;
        }
        else{

            top++ ;
            st[top] = element;

            cout<<"ELEMENT IS INSERTED SUCCESSFULLY"<<endl;
        }
        
    }

    void pop(){

        if (top ==  -1)
        {
            cout<<"STACK IS EMPTY"<<endl;
        }
        else{

            int n = st[top];
            cout<<"ELEMENT DELETED SUCESSFULLY "<<n<<endl;
            top--;
        }
        
    }
   
    int peek(){

        if (top == -1)
        {
            cout<<"LIST IS EMPTY"<<endl;
        }
        else{

            cout<<"STACK TOP ELEMENT IS "<<st[top]<<endl;
        }
        
    }

    void empty(){

        if (top == -1)
        {
            cout<<"STACK IS EMPTY"<<endl;
        }
        else{

            cout<<"stack is not empty"<<endl;
        }
        
    }

};

int main(){


    // stack size decleration 

    Stack st(6);
    

    st.push(56);
     st.push(56);
      st.push(56);
       st.push(6);


    st.peek();


    

}