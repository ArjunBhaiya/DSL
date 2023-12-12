#include<iostream>
#include<queue>

using namespace std;

template <class T>
class Person{
public:
T id;
int height;
Person(T id,int height){
this->id=id;
this->height=height;
}
// Friend function for overloading the < operator
    friend bool operator<(const Person& p1, const Person& p2) {
        return p1.height <= p2.height;
    }
};
// bool operator <(Person p1,Person p2){
// return height <= p2.height;
// }
int main(){
priority_queue<Person<int>> Q;
int n,id,height;
cout<<"Enter total number of People standing in queue:";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"Enter id of Person "<<i+1<<":";
    cin>>id;
    cout<<"Enter height of Person "<<i+1<<":";
    cin>>height;
    Q.push(Person(id,height));
}
cout<<"People leaving according to height:";
while(!Q.empty()){
    Person p=Q.top();
    Q.pop();
    cout<<p.id<<" "<<p.height<<endl;
}
return 0;
}