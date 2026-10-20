#include<iostream>
#include<queue>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(88);

    cout<<"FRONT IS "<<d.front()<<endl;
     cout<<"FRONT IS "<<d.back()<<endl;

     d.push_front(3);
      cout<<"FRONT IS "<<d.front()<<endl;
     cout<<"FRONT IS "<<d.back()<<endl;

     d.push_back(11);

      cout<<"FRONT IS="<<d.front()<<endl;
     cout<<"FRONT IS="<<d.back()<<endl;
    
}