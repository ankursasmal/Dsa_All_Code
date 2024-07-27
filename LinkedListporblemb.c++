#include <iostream>
 using namespace std;
 struct node{
    int item;
    node *next;
    int pow;
   };
 class sll{
    private:
    node *start;
    public:
void polly(int val,int po){
    node *n=new node;
    n->item=val;
    n->pow=po;
    node *t;
    t=start;
    node *t1=NULL;
     if(start==NULL){
        n->next=start;
        start=n;
    }
    else {
        t==start;
        if(t->pow>n->pow){
                n->next=start;
                start=n;
            }
            else{
                t1=t;
                t=t->next;
    while(t!=NULL){

        if(t->pow>n->pow){
n->next=t;
t->next=n;
        }
t1=t;
t=t->next;
        else if(t->pow<n->pow){
               
                n->next=t1->next;
                t1->next=n;
            }

        }
        else{
            t->item=n->item+t->item;
            t->pow=n->pow;
            delete n;
        }
        t=t->next;
    }
    if(t==NULL){
        t->next=
    }

    }

    }
  
 int sll:: addtopol(sll &s1){
    node *t1,*t2,*p=NULL;
    t1=s1.start;
    t2=start;
    if(t1!=NULL){
    while(t1!=NULL){
 while(t2!=NULL){
    if(t1==s1.start){
    if(t2->pow>t1->pow){
        t2->next=s1.start;
        s1.start=t2;
    }
    }
    else if(t2->pow>t1->pow){
 p=t1;
t1=t1->next;
 
t2->next=p->next;
p->next=t2;
    }
    else if(t2->item<t1->item){
        t2=t2->next;
    }

    else if(t2->pow==t1->pow){
        t1->item=t1->item+t2->item;
t1->pow=t2->pow;

    }
    t2=t2->next;
 }
    }
    }
 }
    int countnode(){
        node *t;
        t=start;
        int count=1;
        while(t!=NULL){
              count++;
            t=t->next;
        }return count;
    }
    void reversr(){
        node *t,*t2=NULL;
        do{  
           t=start;
         t->next=t2;
        start=start->next;
        t2=t;
        }
        while(start->next!=NULL);
        start->next=t;
    }
    node* find(){
        node *t1,*t2;
        t1=start;t2=start;
        while(t1!=NULL){
            t1=t1->next->next;
            t2=t2->next;

        }
        return t2;
    }
    bool iscycle(){
       node *t1,*t2;
        t1=start;t2=start;
        while(t1!=NULL){
            if(t1==t2){
                return true;
            }
            t1=t1->next->next;
            t2=t2->next;

        }
        return false;
    } 
    int countcycleL(){
        node *t1,*t2;
        t1=start;t2=start;
        int count=0;
        while(t1!=NULL){
            if(iscycle()){
                count=1;
                while(t1!=t2){
                    count++;
                    t1=t1->next;
                }return count;
             }
            t1=t1->next->next;
            t2=t2->next;

        }
    }


 };
 int main(){

    return 0;
 }
 