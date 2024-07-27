#include <iostream>
 using namespace std;
 struct node{
    int coef;
    int power;
    node *next;
   };
 class sll{
    private:
    node *start;
    public:
    sll(){
        start=NULL;
    }
    void poly(int coe,int pow){
        node *n=new node;
        n->coef=coe;
        n->power=pow;
        n->next=start;
        start=n;
    }
    void Add2poly(){
        node *t,*t1;
        t1=NULL;
        t=start;
        while(t!=NULL&& start!=NULL){
        if(t->power==start->power){
            t1->power=t->power;
t1->coef=t->coef+start->coef;
t1=t1->next;
        }
    }
    t=t->next;
    start=start->next;
    }
 };