#include <iostream>
using namespace std;
struct node{
    int item;
    node *next;
};
class SLL{
private:
node *start;
public:
SLL();
void insertstart(int value);
void insertlast(int value);
node* scarch(int data);
void insertafter(node *ptr,int data);
void delfrist();
void dellast();
void delnode(node *tem);
~SLL();
 
 
 
 bool isempty(){
    return start==NULL;
 }
};                 //insert mana 1 ta node ka insert kora
                      //value insert hola,sanga next o ak sanga 
                        //tairi hoy mana 1 node toiri hoy
SLL::SLL(){
    start=NULL;
}
void SLL:: insertstart(int value){
node *t=new node;
t->item=value;
t->next=start;
start=t;

}
void SLL:: insertlast(int value){
    node *t; 
    node *n=new node;
    n->item=value;
n->next=NULL;//start=NULL;
if(start==NULL){
start=n;     //n->next=start;
}
else{
t=start; //sir lika ni
while(t->next!=NULL){
    t=t->next;
}
t->next=n;

}
}
node* SLL::scarch(int data){
    node *t;
    t=start;
    while(t!=NULL){
        t->item=data;
    return t;
    t=t->next;
    }
   return t; //return NULL;
}
void insertafter(node *ptr,int data){
    node *n=new node;
    n->item=data;
    n->next=ptr->next;
    ptr->next=n;
}
void SLL:: delfrist(){
    node *t;
    if(start!=NULL){
t=start;
start=start->next;
delete t;
    }
}
void SLL::dellast(){
    node *t;
    if(start==NULL){
        cout<<"list is empty";
    }
    else if(start->next==NULL){
        delete start;
        start =NULL;
    }
    else{
        t=start;
        while(t->next->next!=NULL){
            t=t->next;
             }
             delete t->next;
             t->next=NULL;
    }
    }
    void SLL:: delnode(node *tem){
node *t;
if(start==NULL){
    cout<<"EMpty";
}
else {
    if(tem!=NULL){
        if(start==tem){
         start=tem->next;
         delete tem;
        }
        else{
            t=start;
            while(t->next!=tem){
                t=t->next;
            }
            t->next=tem->next;
            delete tem;

        }
    }
    }
    }
   SLL:: ~SLL(){
    if(start!=NULL){
delfrist(); //delete hota thak ba frist node...
    }
   }

 
 