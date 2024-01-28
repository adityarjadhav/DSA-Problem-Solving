#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool parenthesisMatch(const string &exp)
{
    stack<char> stk;
    unordered_map<char, char> closingParen = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char ch : exp)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            stk.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (stk.empty() || stk.top() != closingParen[ch])
            {
                return false;
            }
            stk.pop();
        }
    }

    return stk.empty();
}

int main()
{
    string exp = "((8)(*--$$9))";
    if (parenthesisMatch(exp))
    {
        cout << "The parentheses are matching" << endl;
    }
    else
    {
        cout << "The parentheses are not matching" << endl;
    }

    return 0;
}

/*  the push and pop functions are not declared separately because they are standard functions
provided by the std::stack container adapter in C++. The std::stack class encapsulates the functionality
 of a stack data structure, including push and pop operations, so there's no need to define these
 functions explicitly.*/