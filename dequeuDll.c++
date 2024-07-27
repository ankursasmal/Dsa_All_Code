#include<iostream>
#include <stdio.h>
using namespace std;
struct node{
int item;
node *next;
node* pre;

};
class dequeue{
private:
 node *front;
 node *rear;
 public:
 dequeue(){
    front=NULL;
rear=NULL;
 }
 void insertrear(int val){
    node *n=new node;
    n->item=val;
    n->next=NULL;

    if(isempty()){
      n->pre=NULL;
     rear=n;
     front=n;
 }
 n->pre=rear;
 rear->next=n;

 }

 void insertfront(int val){
 node *n=new node;
    n->item=val;
        n->pre=NULL;

    if(isempty()){
     n->next=front;
     rear=n;
     front=n;
 }
  
 front->pre=n;
 front=n;
 }
 int getfront(){
    return front->item;
 }
 int getrear(){
    return rear->item;
 }
 void delrear(){
    if(!isempty()){ 
        node *t;
        t=rear;
        if(rear==front){
            delete t;
            rear=NULL;
            front=NULL;
        
        }
       
 rear->pre->next=NULL;
 rear=t->pre;
 delete t;
    }
    
 }
 void delfront(){
    node *t;
    if(isempty()){
         cout<<"empty queue";
    }
else{ 
       t=front;

    if(front==rear){
    delete t;
    front= NULL;
    rear=NULL;

}
 front->next->pre=NULL;
    front=t->next;
    delete t;
}

 } 
 dequeue(dequeue &q){
node *n,*t,*t1=front;
t=q.front;
while(t=rear->next){
    n=new node;
    n->item=t->item;
    t=t->next;
    if(front==NULL){
        n->pre=NULL;
        n->next=front;
        front=n;
    }
    t1->next=n;           //i think copy constructor
n->pre=t1;                //for linked list

t1=n;
    
}t1->next=NULL;
}
 ~dequeue(){
    while(isempty()){
        delfront();
    }
 }
 bool isempty(){
    return (front==NULL||rear==NULL);
 }
};
 