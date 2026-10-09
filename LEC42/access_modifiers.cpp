#include<iostream>
using namespace std;


//CREATION OF OBJECT
class Sumit{

    public:
    //properties
    string name;      // size 100
    float height;          // size 4
    float weight;          // size 4

     int getage(){

        return age;
    }

    int getlevel(){

        return level;
    }

    void setage(int a){

        age = a;
    }

    void setlevel(int lev){

      level = lev;
    }


    private:

    int age;      // access by the getter and modify by the setter

    int level;    // access by the getter and modify by the setter

   

    

};

int main(){

    // CREATION OF OBJECT

    Sumit obj1 ;

   // obj1.name = "sumit";
    obj1.height = 5.9;

    obj1.name = "sumit";

    obj1.weight= 4.55;

   // obj1.age = 56;     Error due to the age is the privae member and it access by the seeter and gertter


    cout<<"size of obj1="<<sizeof(obj1)<<endl;

    // ELEMENT ACCESS BY THE DOT OPERATOR

    cout<<"NAME="<<obj1.name<<endl;
    cout<<"height="<<obj1.height<<endl;
    cout<<"weight="<<obj1.weight<<endl;


    obj1.setage(22);

    obj1.setlevel(77);

    // access private members

    cout<<"age of the sumit= "<<obj1.getage()<<endl;

    cout<<"level of the sumit is="<<obj1.getlevel()<<endl;




}