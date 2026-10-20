void push(stack<int>& mystack,int x,stack<int> &ans)
{

    if (mystack.empty())
    {
       mystack.push(x);
       return;
    }


    int num = mystack.top();
   
    mystack.pop();

  


    // Recursion
    pushAtBottom(st, x);

    // Wapas aate waqt element push karo
    mystack.push(num);

} 




