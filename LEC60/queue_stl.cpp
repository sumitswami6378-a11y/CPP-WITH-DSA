#include<iostream>
#include<queue>
using namespace std;


int main(){

    queue<int> qu;

    qu.push(21);

    qu.push(56);
    qu.push(56);

    qu.push(12);

    qu.push(125);

    // size of the queue is

      cout<<"size of the queue is ="<<qu.size()<<endl;

    // front element of the queue
    cout<<endl;
    cout<<"FRONT ELEMENT OF THE QUEUE IS ="<<qu.front()<<endl;

    qu.pop();

     cout<<"FRONT ELEMENT OF THE QUEUE IS ="<<qu.front()<<endl;


     if (qu.empty())
     {
        cout<<"QUEUE IS EMPTY"<<endl;

     }
     else{

        cout<<"QUEUE IS NOT EMPTY"<<endl;
     }
     



  


}