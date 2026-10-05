#include<iostream>
using namespace std;

bool palindrome(string& s,int i,int j){

    if (s[i] != s[j])
    {
        return false;

    }
    if (i>=j)
    {
        return true;
    }

    palindrome(s,i+1,j-1);
    

}

int main(){


    string s = "eye";
    int j = s.length() -1;

    palindrome(s,0,j);

    cout<<"STRING IS PALINDROME OR NOT="<<palindrome(s,0,j);
    
}