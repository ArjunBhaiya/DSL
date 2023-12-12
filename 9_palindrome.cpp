#include<iostream>
#include<string>
using namespace std;
class palin{
 public:
 int top;
 char arr[50];
 palin(){
    top=-1;
 }
 void push(char c){
   arr[++top]=c;
 }
 char pop(){
    return arr[top--];
 }
};
int main(){
 string s,rev="";
 palin p;
 cout<<"Enter string : ";
 cin>>s;
 for(char ch:s){
  p.push(ch);
 }
 for(char ch:s){
     rev=rev+p.pop();
 }
 cout<<"Orginal String and reversed Strings:\n"<<s<<' '<<rev<<endl;
 if(s==rev)
    cout<<"Given String is Palindrome";
 else
  cout<<"Given String is not Palindrome";
}