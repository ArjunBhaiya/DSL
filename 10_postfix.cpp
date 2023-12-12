#include<iostream>
using namespace std;
class stack{
public:
int top;
char oper[50];
stack(){
    top=-1;
}
void push(char op){
 oper[++top]=op;
}
char pop(){
    return oper[top--];
}
bool isempty(){
    return top==-1;
}
char peek(){
    return oper[top];
}
};
int precedence(char c){
    switch (c)
    {
    case '/':return 4;
    case '*': return 3;
    case '+':return 2;
    case '-':return 1;
    case '(':return 0;
    default: return -1;
    }
}
int main(){
    stack s;
    string postfix;
    char next_ch;
    string exp;
    cout<<"Enter infix expression : ";
    cin>>exp;
    for(char ch:exp){
        switch(ch){
            case '(':s.push(ch);
            break;
            case ')':while((next_ch=s.pop())!='('){
                 postfix=postfix+next_ch;
            }
            break;
            case '+':
            case '-':
            case '*':
            case '/':
              while(!s.isempty()&&(precedence(s.peek())>=precedence(ch)))
               postfix=postfix+s.pop();
              s.push(ch);
               break;
            default:postfix=postfix+ch;
        }
    }
      while (!s.isempty()) {
        postfix = postfix + s.pop();
    }
    cout<<"Postfix is "<<postfix;
}