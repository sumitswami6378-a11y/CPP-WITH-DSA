#include<iostream>
using namespace std;

class student{

    public:

    string name= "sumit swami";

    int rollno = 56;

    string branch = "cse";

    float getmath(){

        return math_marks;
    }

    float getdsa(){

        return dsa_marks;
    }

    void setmath(int value){

        math_marks = value;
    }

    void setdsa(int value){

        dsa_marks = value;
    }

    

    private:                  /// it access by the using getter and setter;

    float math_marks = 78;

    float dsa_marks;

    float english_marks = 87;


};


int main(){


    student data;

    cout<<"size of obj data="<<sizeof(data)<<endl;

    cout<<"size of getdsa="<<data.getdsa()<<endl;

    data.setdsa(45);

    data.setmath(85);

    cout<<"math ="<<data.getmath()<<endl;

    
    cout<<"size of getdsa="<<data.getdsa()<<endl;



   
}