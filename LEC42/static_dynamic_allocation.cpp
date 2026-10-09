#include<iostream>
using namespace std;

class student{

    public:

    string name;
    int age;
    int rollno;

    private:

    int cgp;


};

int main(){



    // this is static allocation

    student sumit;


    sumit.age = 45;

    sumit.name = "sumit";

    sumit.rollno = 56;


    cout<<"age="<<sumit.age<<endl;

    cout<<"name="<<sumit.name<<endl;

    cout<<"rollno="<<sumit.rollno<<endl;

    // this is dynammic allocation

    student *s = new student;

    s->age = 6;


    cout<<"rollno="<<(*s).rollno<<endl;

    cout<<"rollno="<<(*s).age<<endl;

    cout<<"rollno="<<(*s).name<<endl;




}