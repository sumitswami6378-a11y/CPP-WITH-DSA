#include<iostream>
using namespace std;

void reverse(string& s,int i,int j){

    if (i>j)
    {
        return;
    }

    swap(s[i],s[j]);
    i++;
    j--;


    

}

int main(){

    string name = "sumit";


    int j = name.length() -1;

    reverse(name,0,j);

    cout<<name<<endl;

}