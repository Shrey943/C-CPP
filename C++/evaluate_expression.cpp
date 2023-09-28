#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int evaluate(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
    return 0;
}
int main()
{
    stack<int> stack1;
    stack<int> operand;
    unordered_map<char, int> precedence = {{'*', 2}, {'/', 2}, {'+', 1}, {'-',1,},{'(', 4}};
    string expression = "1+2*(7*(9-2*8/4)-2)";
    char op;
    int res=0;
    int a, b = 0;

    for (char c : expression)
    {
        if (isdigit(c))
        {
            cout << "is digit " << (int)c - '0';
            operand.push((int)c - '0');
        }
        else
        {
            if (stack1.empty())
            {
                cout << "empty ";
                stack1.push(c);
                continue;
            }
            if (c == ')')
            {
                cout << "closing";
                while (!stack1.empty() && stack1.top() != '(')
                {
                    cout << "closing loop ";
                    op = stack1.top();
                    b = operand.top();
                    operand.pop();
                    a = operand.top();
                    operand.pop();
                    res = evaluate(a, b, op);
                    operand.push(res);
                    stack1.pop();
                }
                if (!stack1.empty())
                    stack1.pop();
                continue;
            }
            while ( !stack1.empty() && precedence[c] <= precedence[stack1.top()] && c != '(')
            {
                try{
                cout << "rest loop ";
                op = stack1.top();
                b = operand.top();
                operand.pop();
                a = operand.top();
                operand.pop();
                res = evaluate(a, b, op);
                operand.push(res);
                stack1.pop();
                }catch(...){
                cout << "error";
                }
            }
            cout<<"push ";
            stack1.push(c);
        }
    }
    cout << "Completed big one";
    while(!stack1.empty()){
        op = stack1.top();
        b = operand.top();
        operand.pop();
        a = operand.top();
        operand.pop();
        res = evaluate(a, b, op);
        operand.push(res);
        stack1.pop();
    }
    cout << "Result: " << operand.top();

    return 0;
}