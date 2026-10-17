#include<iostream>
#include<stack>
using namespace std;

int main(){

    // this implementation of stack using stl


    stack<int> st;

    st.push(23);
    st.push(12);
     st.push(3);
    st.push(1);

    cout<<"STACK TOP ELEMENT IS "<<st.top()<<endl;

    st.pop();

    cout<<"STACK TOP ELEMENT IS "<<st.top()<<endl;



   if (st.empty())
   {
    cout<<"STACK IS EMPTY"<<endl;
   }
   else{

    cout<<"stack is not empty"<<endl;
   }
   

  
}