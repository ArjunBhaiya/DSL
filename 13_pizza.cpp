#include<iostream>
using namespace std;
class pizza{
 static const int m=10;
 string arr[m]; //pizza names
 int front,rear;
 public:
 pizza(){
    front=rear=-1;
 }
 void add_order(string order)// Enqueue
 { if(isFull()){
    cout<<"Sorry we aren't accepting any more orders right now!"<<endl;
    return;
 }
 if(isEmpty())
  front=rear=0;
 else
   rear=(rear+1)%m;
 arr[rear]=order;
 cout<<"Preparing "<<order<<endl;
 cout<<"\n"<<total();
 }
 void give_order()//Dequeue
 {
    if(isEmpty()){
        cout<<"No Orders left to serve."<<endl;
        return;
    }
    string order=arr[front];
    if(front==rear)
     //pizza();
     front=rear=-1;
    else
     front=(front+1)%m;
   cout<<"Served "<<order<<"."<<endl;
   cout<<total()<<" orders remaining"<<endl;
 }
 void display(){
 if(isEmpty()){
    cout<<"No pending orders."<<endl;
    return;
 }
  int i=front;
  cout<<"Displaying "<<total()<<" Orders:"<<endl;
  for(int j=1;j<=total();j++){
   cout<<j<<")"<<arr[i]<<endl;
   i=(i+1)%m;
  }
 }
 bool isEmpty(){
    return front==-1;
 }
 bool isFull(){
    return front==(rear+1)%m;
 }
 int total(){
    if(isEmpty())
     return 0;
    int c=0;
    for(int i=front;i<rear;i=(i+1)%m){
       c++;
    }
    return c+1;
 }
};
int main(){
    pizza p;
    int choice;string order;
    do{
    cout<<"\nEnter your choice:"<<endl;
    cout<<"1.Add order"<<endl;
    cout<<"2.Serve order"<<endl;
    cout<<"3.Display orders"<<endl;
    cout<<"Note:Entering any invalid choice will exit the program."<<endl;
    cin>>choice;
    switch (choice)
    {
   case 1:
    cout<<"Enter your order:";
    cin>>order;
    p.add_order(order);
    break;
   case 2:
    p.give_order();
    break;
   case 3:
    p.display();
    break;
   default:
     cout<<"Exiting...";
     return 0;
    }
    }while(true);
}