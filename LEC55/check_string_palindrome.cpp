#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<char> st;

    string name = "EYE";

    for (int i = 0; i < name.size(); i++)
    {
        char ch = name[i];
        st.push(ch);
    }

    
    string ans="";

    while(!st.empty())
    {
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    

    cout<<name<<endl;
    cout<<ans<<endl;



    if (ans == name)
    {
        cout<<"PALINDROME"<<endl;
    }
    else{

        cout<<"NOT PALINDRONE"<<endl;
    }
    
    
}
