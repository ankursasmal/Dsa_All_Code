#include <iostream>
#include <stdio.h>
using namespace std;
struct node{
  int item;
  node *next;  
};
class CLL{
private:
node *last;
public:
CLL(){
    last=NULL;
}
void insertFrist(int data){
    node *n=new node;
    n->item=data;
    if(last!=NULL){ //
    n->next=last->next;
    last->next=n;
    }
    else{
   n->next=n;
   last=n;
 }
}
void insertLast(int val){
    node *n=new node;
    n->item=val;
    if(last!=NULL){
n->next=last->next;
    last->next=n;
    last=n;
}
else{
    n->next=n;
    last=n;
}}
node* scarch(int val){
node *t;
t=last->next;
if(last!=NULL){
while(t!=last->next){
   if(t->item==val){
    return t;
   }
    t=t->next;
}
}return NULL;
}
void insertAfter(node *tem,int val){
    node *n=new node;
    n->item=val;
    n->next=tem->next;
    tem->next=n;
         if(tem==last){
 last=n;
          }
         }
void delFrist(){
    if(last!=NULL){
    node *t;
    t=last->next;
     if(last->next=last){
        last=NULL;
    }
        else{
            last->next=t->next;
        }
     delete t;
    }
}
void delLast(){
    if(last!=NULL){
    node *t;
    t=last->next;
    while(t->next!=last){
       t= t->next;
    }             //t pointer create ho cha bola
    if(t=last){ //loop na challa (last->naxt=last);
delete last;
last =NULL;
    }
    else{
    t->next=last->next;
    
    delete last;
    last=t;
}
}
}
void delaftter(node *tem){
    if(tem!=NULL){
    node *t;
    while(t->next!=tem){
        t=t->next;
    }

    t->next=tem->next;
    if(t=tem){ //single node
        last=NULL;
    }
      else if(tem==last){
        last=t;
    }
    delete tem;
  
    }
}
~CLL(){
    while(last!=NULL){
delFrist();
    }
}
};
int main(){
    return 0;
}