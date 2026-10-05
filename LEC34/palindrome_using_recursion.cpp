#include<iostream>
using namespace std;

void reverse(string& s,int i,int j){

    if (i > j)
    {
        return;
    }

    swap(s[i++],s[j--]);


    reverse(s,i,j);


    
}
int main(){

    string name = "sumit swami";

    string original = name;

    int n = name.length();

    reverse(name,0,n-1);

    cout<<name<<endl;

    if (original == name)
    {
        cout<<"Palindrome"<<endl;
    }
    else{

        cout<<"NOT palindrome"<<endl;
    }

    
}