
string isBalanced(string expression)
{
    stack<char> s;
    
    for(int i=0;i<expression.size();i++)
    {
        if(expression[i]=='{' || expression[i]=='[' || expression[i]=='(')
        s.push(expression[i]);
        else
        {
            if(s.empty())
            {
                s.push(expression[i]);
                break;
            }
            
            else if(s.top()=='{')
            {
                if(expression[i]=='}')
                s.pop();
                else
                 break;
            }
            
            
            else if(s.top()=='[')
            {
                if(expression[i]==']')
                s.pop();
                else
                break;
            }
            
            else if(s.top()=='(')
            
            {
                if(expression[i]==')')
            s.pop();
            else
            break;
            }
            
            
            
            
            
            
        }
      
    }
    
    if(s.empty())
    return "YES";
    else
    return "NO";

}
