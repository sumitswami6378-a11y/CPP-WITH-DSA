#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "sumit";

    stack<char> st;

    for (int i = 0; i <str.size(); i++)
    {
        char ch = str[i];

        st.push(ch);
    }

    string ans ="";

    while (!st.empty())
    {
        char ch = st.top();
        ans.push_back(ch);
        
        st.pop();
    }

   cout<<ans<<endl;
    
    
}