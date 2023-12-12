#include<iostream>
using namespace std;
class jobs{
public:
string arr[100];
int front,rear;
jobs(){
    front=rear=-1;
}
void enqueue(string name){
    if(isEmpty())
     front=0;
    cout<<rear<<endl;
    arr[++rear]=name;
    cout<<rear<<endl;
}
string dequeue(){
    if(isEmpty())
    { cout<<"Queue is empty,jobs cant be deleted";
     return "empty";
    }
    return arr[front++];
}
bool isEmpty(){
    cout<<rear<<endl;
    return front==-1;
}
void display(){
 if(isEmpty())
  cout<<"Queue is empty"<<endl;
 else{
    for(int i=front,j=1;i<=rear;i++,j++){
        cout<<j<<"."<<arr[i]<<endl;
    }
 }
}
};
int main(){
 jobs j;
 string name;int choice;
 do{
 cout<<"\nEnter your choice"<<endl;
 cout<<"1)Add job"<<endl;
 cout<<"2)Delete job"<<endl;
 cout<<"3)Display jobs"<<endl;
 cout<<"Note:Entering any invalid choice will exit the program."<<endl;
 cin>>choice;
 switch (choice)
 {
 case 1:
    cout<<"Enter name of new Job:";
    cin>>name;
    j.enqueue(name);
    cout<<"Job added successfully"<<endl;
    break;
 case 2:
    cout<<"Deleted "<<j.dequeue()<<" from job queue"<<endl;
    break;
 case 3:
    cout<<"Displaying remaining jobs"<<endl;
    j.display();
    break;
 default:
    cout<<"Invalid choice\nExiting...";
    return 0;
    break;
 }
 }while(true);
}