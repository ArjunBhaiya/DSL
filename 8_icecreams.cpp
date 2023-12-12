#include<iostream>
using namespace std;
struct node{
    string name;
    node* next;
    node(){
        next=nullptr;
    }
};
class list{
 public:
 node* head=new node();
 void input(int n){
        node* temp;
        temp=head;
        cin>>head->name;
        for(int i=1;i<n;i++){
            node* newnode=new node();
            temp->next=newnode;
            temp=temp->next;
            cin>>newnode->name;
        }
        cout<<"List Stored."<<endl;
    }
 void display(){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->name<<endl;
        temp=temp->next;
    }
 }
 bool contains(string val){
    node* temp=head;
    while(temp!=nullptr){
        if(temp->name==val)
         return true;
        temp=temp->next;
    }
    return false;
 }
};
void both(list l1,list l2){
 node* temp=l1.head;
 while(temp!=nullptr){
    if(l2.contains(temp->name))
     cout<<temp->name<<endl;
    temp=temp->next;
 }
}
void either(list l1,list l2){
 node* temp=l1.head;
 while(temp!=nullptr){
    if(!l2.contains(temp->name))
     cout<<temp->name<<endl;
    temp=temp->next;
 }
 node* temp2=l2.head;
 while(temp2!=nullptr){
    if(!l1.contains(temp2->name))
     cout<<temp2->name<<endl;
    temp2=temp2->next;
 }
}
int main(){
 int n;
 list A,B;
 cout<<"Number of Students who like vanilla ice-cream:";
 cin>>n;
 cout<<"Enter names of students who like vanilla ice-cream"<<endl;
 A.input(n);
 cout<<"Number of Students who like butterscotch ice-cream:";
 cin>>n;
 cout<<"Enter names of students who like butterscotch ice-cream"<<endl;
 B.input(n);
 do{
 cout<<"Choose option"<<endl;
 cout<<"1)Set of students who like both vanilla and butterscotch"<<endl;
 cout<<"2)Set of students who like either vanilla or butterscotch or not both"<<endl;
 cin>>n;
 switch(n){
    case 1:
     both(A,B);
     break;
    case 2:
     either(A,B);
     break;
    default:cout<<"Invalid option. exiting program."<<endl;
    return 0;
 }
 }while(true);
}