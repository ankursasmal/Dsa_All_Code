#include <iostream>
#include<stdio.h>
using namespace std;
struct node{
int item;
node *pre;
node *next;
};
class CDLL{
private:
node *start;
public:
CDLL(){
    start=NULL;
}
void insertFrist(int data){
node *n=new node;
n->item=data;
if(start!=NULL){
n->pre=start->pre;
n->next=start;
n->next->pre=n;
n->pre->next=n;
start=n;
if(start==NULL){
    n->next=n;
    n->pre=n;
    start=n;
}

}
}
void insertLast(int data){
    node *n=new node;
    n->item=data;
    if(start!=NULL){
    n->pre=start->pre;
    n->next=start;
    start->pre->next=n;
    start->pre=n;
}
if(start==NULL){
    n->next=n;
    n->pre=n;
    start=n;
}
}
node* scarch(int data){
    if(start!=NULL){
        node *t;
        t=start;
        while(t!=start){  //start->pre->next;
if(t->item==data){
    return t;
}
        }
       
} return NULL; //or t;
}
void insertAfter(node *tem,int data){
     if(tem!=NULL){  
          node *n=new node;

     n->item=data;
   n->next=tem->next;
    n->pre=tem;
    tem->next->pre=n;
    tem->next=n;

}
else{
    cout<<"empty";
}
}
void delFrist(){
    node *t;
if(start!=NULL){
    t=start; 
    // if(t->next==start && t->pre==start)   //t==start;
    // {
    //     start=NULL;        na korlao haba
    //     delete t;
}
    t->pre->next=t->next;        //start->pre->next=r->pre->next
    t->next->pre=t->pre; //start->pre==t->pre
    if(start->next==start){
        start=NULL;}
        else{
    start=t->next;
        }
delete t;
}

void delLast(){
    node *t;
    if(start!=NULL){
        if(start->pre==start){
    delete start;
    start=NULL;
    
   }
        else{  
            t=start;                      //with out loop
           while(t!=start->pre){             //t=start->pre;
            t=t->next;                       //ata mana last node
           }
           t->pre->next=start;
           start->pre=t->pre;
           delete t;
  }
    }
  
}
// void delnode(node *tem){
//     node *t;
// if(tem!=NULL){
// t=start;
// while(t->next->next!=tem){     //with loop
//     t=t->next;
// }
// t->next=tem->next;
// tem->next->pre=t;
// delete tem;
// }
// }
void delnode(node *tem){
    if(tem!=NULL){
        tem->pre->next=tem->next;
        tem->next->pre=tem->pre;
        if(start==tem){
            start=tem->next;
        }else if(start==start->pre){
             start=NULL;
        }
        delete tem;
    }
}
~CDLL(){
while(start!=NULL){
    delFrist();
}
}
};
int main(){
    return 0;
}