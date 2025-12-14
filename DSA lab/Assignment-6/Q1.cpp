#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix;

    for (char ch : infix) {
        if (isalnum(ch)) {
            postfix += ch;
        }

        else if (ch == '(') {
            st.push(ch);
        }
        
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if(st.top()=='(' ) st.pop(); 
            else printf("Use proper brackets...");
        }
    
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;
    int c1=0,c2=0;
    for(int i=0;i<infix.size();i++){
        if(infix[i]=='(') c1++;
        else if(infix[i]==')') c2++;
    }
    if(c1!=c2){
        printf("Invalid Infix expression...");
    }
    else{
        string postfix = infixToPostfix(infix);
        cout << "Postfix expression: " << postfix << endl;
    }


    return 0;
}